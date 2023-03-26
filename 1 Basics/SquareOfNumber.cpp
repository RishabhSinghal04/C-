// A program to display square of a Whole Number(W)

#include <iostream>
#include <conio.h>
#include <math.h>
    
using namespace std;
    
int main()
{
    unsigned short n;

    cout << "Enter a number: ";
    cin >> n;

    cout << n << " ^ 2 is " << (int)(pow(n, 2));
    
    getch();
    return 0;
}