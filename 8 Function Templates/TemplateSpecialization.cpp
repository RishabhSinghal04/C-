
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
const char *maximum<const char *>(const char *a, const char *b)
{
    return (strcmp(a, b) > 0) ? a : b;
}

int main()
{
    int num1 = 4235, num2 = 457;
    double num3 = 47.376, num4 = 537.648;

    const char *word1{"Solar"}, *word2{"System"};

    int max_int = maximum(num1, num2);
    double max_double = maximum(num3, num4);

    cout << max_int << '\n'
         << max_double << '\n';
    cout << maximum(word1, word2);

    getch();
    return 0;
}