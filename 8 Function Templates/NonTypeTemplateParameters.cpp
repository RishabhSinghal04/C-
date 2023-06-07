
#include <iostream>
#include <conio.h>

using namespace std;

template <int temp, typename T>
bool isValid(T integers[], size_t size)
{
    T sum = 0;
    for (size_t index = 0; index < size; ++index)
    {
        sum += integers[index];
    }
    return (sum > temp) ? true : false;
}

int main()
{
    int integers[]{12, 346, 467, 436, 468, 463, 247567, 9890, 53, 4652, 48561};
    bool valid = isValid<154290, int>(integers, size(integers));

    cout << boolalpha << valid << '\n';

    getch();
    return 0;
}