#pragma once

#include <iostream>
#include <algorithm>

#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <vector>

#include <map>
#include <set>
#include <tuple>
#include <utility>

#include <queue>
#include <stack>

/**
 * @brief A function template to print std::array
 * @tparam T A thing of arbitrary type
 * @tparam N Another thing of arbitrary type
 * @param out
 * @param arr
 * @return std::ostream object
 */
template <typename T, size_t N>
std::ostream &operator<<(std::ostream &out, const std::array<T, N> &arr)
{
    for (const auto &element : arr)
    {
        out << element << ", ";
    }

    out << "\b\b ";
    return out;
}

/**
 * @brief A template to print key and value of std::pair
 * @tparam X : A thing of arbitrary type
 * @tparam Y : Another thing of arbitrary type
 * @param out
 * @param map_container
 * @return std::ostream object
 */
template <typename X, typename Y>
std::ostream &operator<<(std::ostream &out, const std::pair<X, Y> &pair_container)
{
    return out << pair_container.first << " : " << pair_container.second;
}

/**
 * @brief A template to print key and value of std::map
 * @tparam X : A thing of arbitrary type
 * @tparam Y : Another thing of arbitrary type
 * @param out
 * @param map_container
 * @return std::ostream object
 */
template <typename X, typename Y>
std::ostream &operator<<(std::ostream &out, const std::map<X, Y> &map_container)
{
    for (const auto &[key, value] : map_container)
    {
        out << key << " : " << value << '\n';
    }
    return out;
}

/**
 * @brief A template function to print an element of std::tuple
 * @tparam T A thing of arbitrary type
 * @param out
 * @param tuple_container
 * @return std::ostream object
 */
template <typename T>
std::ostream &operator<<(std::ostream &out, const std::tuple<T> &tuple_container)
{
    return out << std::get<0>(tuple_container);
}

/**
 * @brief A variadic template function to print an element of std::tuple
 * @tparam T A thing of arbitrary type
 * @tparam ...ARGS Arguments of arbitrary type
 * @param out
 * @param tuple_container
 * @return std::ostream object
 */
template <typename T, typename... ARGS>
std::ostream &operator<<(std::ostream &out, const std::tuple<T, ARGS...> &tuple_container)
{
    return out << std::get<0>(tuple_container) << ", "
               << std::make_tuple(std::get<ARGS>(tuple_container)...);
}

/**
 * @brief A variadic template to print sequence containers
 * @tparam T : A thing of arbitrary type
 * @param out
 * @param collection
 * @return std::ostream object
 */
template <template <typename...> class U, typename T>
std::ostream &operator<<(std::ostream &out, const U<T> &collection)
{
    for (const auto &element : collection)
    {
        out << element << ", ";
    }

    out << "\b\b ";
    return out;
}

/**
 * @brief A variadic function template to print sequence container of std::map or std::pair
 * @tparam ...ARGS
 * @param out
 * @param collection
 * @return std::ostream object
 */
template <template <class X> class U, template <typename...> class X, typename... ARGS>
std::ostream &operator<<(std::ostream &out, const U<X<ARGS...>> &collection)
{
    for (const auto &element : collection)
    {
        out << '\n'
            << element;
    }
    return out;
}

/**
 * @brief A template function to print elements of std::stack
 * @tparam T A thing of arbitrary type
 * @param out
 * @param collection
 * @return std::ostream object
 */
template <typename T>
std::ostream &operator<<(std::ostream &out, std::stack<T> collection)
{
    while (!collection.empty())
    {
        out << '\n'
            << collection.top();
        collection.pop();
    }
    return out;
}

/**
 * @brief A template function to print elements of std::queue
 * @tparam T A thing of arbitrary type
 * @param out
 * @param collection
 * @return std::ostream object
 */
template <typename T>
std::ostream &operator<<(std::ostream &out, std::queue<T> collection)
{
    while (!collection.empty())
    {
        out << '\n'
            << collection.front();
        collection.pop();
    }
    return out;
}