#pragma once

#include <algorithm>
#include <random>
#include <vector>

#include "stream_insertion.h"

/**
 * @brief A class to store numbers in blocks and some operations (=, +, +=)
 * @tparam T
 */
template <typename T>
class BoxContainer : public StreamInsertion
{
	static const uint32_t DEFAULT_CAPACITY = 10U;

	size_t capacity = 0U;
	std::vector<T> numbers;

public:
	/**
	 * @brief Default Constructor
	 */
	BoxContainer()
		: BoxContainer(DEFAULT_CAPACITY)
	{
	}

	/**
	 * @brief Constructor to initialze capacity
	 * @param uint32_t capacity
	 */
	BoxContainer(const uint16_t capacity)
		: capacity{capacity}
	{
	}

	/**
	 * @brief  Heavy lifting constructor to initialize capacity and numbers
	 * @note   T : number
	 * @param  vector<T>&: numbers
	 */
	BoxContainer(const std::vector<T> &numbers)
		: numbers{numbers}, capacity{numbers.capacity()}
	{
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

		T max_num = 100.0, min_num = -99.0;

		std::random_device rd;
		using dist_t = std::conditional_t<std::is_integral_v<T>,
										  std::uniform_int_distribution<T>,
										  std::uniform_real_distribution<T>>;
		dist_t dist(min_num, max_num);

		// Generate random value using generate function
		std::generate(numbers.begin(), numbers.end(), [&dist, &rd]()
					  { return dist(rd); });
	}

	/**
	 * @brief A member function to add an element
	 * @param T& A number to be added
	 */
	void addElement(const T &number)
	{
		numbers.emplace_back(number);
	}

	/**
	 * @brief A member function to remove an element
	 * @param T& A number to be removed
	 * @retval bool
	 */
	bool removeElement(T &number)
	{
		size_t num_index = capacity + 1ULL;

		for (size_t index = 0; index < numbers.size(); ++index)
		{
			if (number == numbers[index])
			{
				num_index = index;
				break;
			}
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
	 * @param BoxContainer RHS object
	 */
	void operator+=(const BoxContainer &box_container_rvalue)
	{
		for (size_t index = 0; index < box_container_rvalue.getSize(); ++index)
		{
			numbers.emplace_back(box_container_rvalue.numbers[index]);
		}
		capacity = numbers.size();
	}

	/**
	 * @brief A member function to assign an object to another object
	 * @param BoxContainer RHS object
	 */
	void operator=(const BoxContainer<T> &box_container_rvalue)
	{
		if (this == &box_container_rvalue)
		{
			return;
		}

		numbers.resize(box_container_rvalue.getSize());
		std::copy(box_container_rvalue.numbers.begin(), box_container_rvalue.numbers.end(), numbers.begin());
	}

	// StreamInsertion Interface Method
	virtual void printInformation() const
	{
		std::cout << "\tNumber of Elements :  " << numbers.size()
				  << ", Capacity : " << capacity
				  << "\n\t Elements : ";

		for (const auto &integer : numbers)
		{
			std::cout << integer << "  ";
		}
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
BoxContainer<T> operator+(const BoxContainer<T> &box_container_left, const BoxContainer<T> &box_container_right)
{
	BoxContainer<T> result(box_container_left.getSize() + box_container_right.getSize());

	result += box_container_left;
	result += box_container_right;

	return result;
}