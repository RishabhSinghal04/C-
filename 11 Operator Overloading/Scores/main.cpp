
#include <iostream>
#include <conio.h>

#include "scores.h"

int main()
{
    using namespace std;

    Scores score_math("Maths");

    score_math[5] = 89;
    score_math.print_info();

    const Scores score_geo("Geography");
    std::cout << "\nGeography : " << score_geo[5] << '\n';

    getch();
    return 0;
}