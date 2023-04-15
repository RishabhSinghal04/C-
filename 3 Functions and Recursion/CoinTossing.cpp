/*
 * Let the program toss the coin 100 times and count the number of times each side of the coin appears.
 * The program should call a separate function flip that takes no arguments and returns 0 for tails and 1 for heads.
 */

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <random>

#define N 100 // end for loop
#define WIDTH 3

using namespace std;

void coinToss();
inline unsigned short flip();

int main()
{
    coinToss();

    getch();
    return 0;
}

void coinToss()
{
    unsigned short headCounter = 0, tailCounter = 0;

    for (size_t i = 1; i <= N; ++i)
    {
        cout << setw(WIDTH);
        // 1 -> Head
        if (flip())
        {
            cout << i << ". "
                 << "Head\n";
            headCounter++;
        }
        // 0 -> Tail
        else
        {
            cout << i << ". "
                 << "Tail\n";
            tailCounter++;
        }
    }
    cout << "\nHead appeared " << headCounter << " times";
    cout << "\nTail appeared " << tailCounter << " times";
}

unsigned short flip()
{
    random_device rd;
    uniform_int_distribution<unsigned short> head_or_tail(0, 1);
    return head_or_tail(rd);
}