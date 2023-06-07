
#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

template <>
const char *maximum(const char *a, const char *b)
{
    return (strcmp(a, b) > 0) ? a : b;
}

template <typename T>
T *maximum(T *a, T *b)
{
    return (*a > *b) ? a : b;
}

int main()
{
    int a = 235, b = 432645;
    const char *word1{"Hello"}, *word2{"World"};
    double c = 5685, d = 423;
    double *max_ptr = maximum(&c, &d);

    cout << maximum(a, b) << '\n'
         << maximum(word1, word2) << '\n'
         << *max_ptr << '\n';

    getch();
    return 0;
}