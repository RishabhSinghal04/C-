#pragma once

#include <algorithm>
#include <cmath>
#include <concepts>
#include <limits>
#include <random>
#include <type_traits>
#include <vector>

#include "stream_insertion.h"

template <typename V>
concept Number = (std::integral<V> || std::floating_point<V>)&&(!std::same_as<V, char>)&&(!std::same_as<V, bool>);

/**
 * @brief A class to store numbers in blocks and some operations (=, +, +=)
 * @tparam T
 */
template <typename T>
    requires(std::integral<T> || std::floating_point<T>)
class BoxContainer : public StreamInsertion
{
    static_assert((!std::is_same_v<T, char>)&&(!std::is_same_v<T, bool>),
                  "----- REAL NUMBERS ONLY -----");

    static const uint32_t DEFAULT_CAPACITY = 10U;

    size_t capacity = 0U;
    std::vector<T> numbers;

    void invalidate()
    {
        numbers.clear();
        capacity = 0U;
    }

public:
    BoxContainer()
        : BoxContainer(DEFAULT_CAPACITY)
    {
    }

    explicit BoxContainer(const uint16_t capacity)
        : capacity{capacity}
    {
    }

    explicit BoxContainer(const std::vector<T> &numbers)
        : numbers{numbers}, capacity{numbers.capacity()}
    {
    }

    // Move Constructor
    BoxContainer(BoxContainer &&box_container)
    {
        if (this == &box_container)
        {
            return;
        }
        numbers = box_container.numbers;
        capacity = box_container.capacity;

        box_container.invalidate();
    }

    // __Getters__
    const size_t &getCapacity() const
    {
        return capacity;
    }

    const size_t getSize() const
    {
        return numbers.size();
    }

    // __Setter__
    void setCapacity(uint32_t &capacity)
    {
        this->capacity = capacity;
    }

    /**
     * @brief A member function to initialize random numbers
     */
    void initializeRandomNumbers()
    {
        if (numbers.empty())
        {
            numbers.resize(capacity);
        }

        /* T max_num = std::numeric_limits<T>::max();
        T min_num = std::numeric_limits<T>::min(); */

        double max_num = 100.0, min_num = -99.0;

        std::random_device rd;
        using dist_t = std::conditional_t<std::is_floating_point_v<T>,
                                          std::uniform_real_distribution<T>,
                                          std::uniform_int_distribution<T>>;
        dist_t dist(min_num, max_num);

        // Generate random value using generate function
        std::generate(numbers.begin(), numbers.end(), [&dist, &rd]()
                      { return dist(rd); });
    }

    /**
     * @brief A member function to add an element
     * @param V& A number to be added
     * @note V : Number
     */
    template <Number V>
    void addElement(const V &number)
    {
        numbers.emplace_back(number);
        capacity = numbers.capacity();
    }

    /**
     * @brief A member function to remove an element
     * @param V& A number to be removed
     * @note V : Number
     * @retval bool
     * */
    template <Number V>
    bool removeElement(const V &number)
    {
        size_t num_index = capacity + 1ULL;
        constexpr double EPSILON = 1e-6;

        for (size_t index = 0; index < numbers.size(); ++index)
        {
            if (std::abs(number - numbers[index]) <= std::numeric_limits<T>::epsilon())
            {
                num_index = index;
                break;
            }
            /* if (std::is_integral_v<V>)
            {
                if (number == numbers[index])
                {
                    num_index = index;
                    break;
                }
            }
            else
            {
                if ((fabs(number - numbers[index]) < EPSILON))
                {
                    num_index = index;
                    break;
                }
            } */
        }

        if (num_index > numbers.size())
        {
            return false;
        }

        // Overshadow element at index with the last element and decrement size;
        numbers[num_index] = numbers[numbers.size() - 1];
        numbers.pop_back();

        return true;
    }

    /**
     * @brief A member function to add one object numbers to another object from back
     * @param BoxContainer rvalue object
     */
    void operator+=(const BoxContainer<T> &box_container_rvalue)
    {
        for (size_t index = 0; index < box_container_rvalue.getSize(); ++index)
        {
            numbers.emplace_back(box_container_rvalue.numbers[index]);
        }
        capacity = numbers.size();
    }

    /**
     * @brief A member function to assign an object to another object
     * @param BoxContainer rvalue object
     */
    void operator=(BoxContainer<T> &&box_container_rvalue)
    {
        if (this == &box_container_rvalue)
        {
            return;
        }

        numbers.resize(box_container_rvalue.getSize());

        capacity = box_container_rvalue.getCapacity();
        numbers = box_container_rvalue.numbers;
        // std::copy(box_container_rvalue.numbers.begin(), box_container_rvalue.numbers.end(), numbers.begin());

        box_container_rvalue.invalidate();
    }

    // StreamInsertion Interface Method
    virtual void printInformation() const
    {
        std::cout << "\tNumber of Elements : " << numbers.size()
                  << ", Capacity : " << capacity
                  << "\n\t Elements : ";

        for (size_t index = 0; index < numbers.size(); ++index)
        {
            (index == 0)
                ? std::cout << "[ " << numbers[index]
                : std::cout << ", " << numbers[index];
        }
        std::cout << " ]";
    }
};

/**
 * @brief A function to add objects of class BoxContainer
 * @tparam T
 * @param BoxContainer<T> object
 * @param BoxContainer<T> object
 * @return Object of BoxContainer
 */
template <typename T>
    requires(std::integral<T> || std::floating_point<T>)
BoxContainer<T> operator+(const BoxContainer<T> &box_container_left, const BoxContainer<T> &box_container_right)
{
    BoxContainer<T> result(box_container_left.getSize() + box_container_right.getSize());

    result += box_container_left;
    result += box_container_right;

    return result;
}