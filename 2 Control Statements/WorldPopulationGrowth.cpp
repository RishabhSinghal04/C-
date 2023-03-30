/*
 * Write a program that calculates world population growth each year for the next 25 years, using the simplifying assumption that the current growth rate will stay constant.
 * Print the results in a table.
 * The first column should display the year form year 1 to year 25.
 * The second column should display the anticipated world population at the end of that year.
 * The third column should display the numerical increase in the world population that would occur that year.
 * Using your results, determine the year in which the population would be double what it is today, if this year's growth rate were to persist.
 */

#include <iostream>
#include <conio.h>
#include <iomanip>

#define E 2.71828

using namespace std;

int main()
{
    unsigned short year = 2022;
    const float growthRate = 0.83F;
    float numericalIncrease = 0.0F, currentPopulation = 7'975'105'156.0F;

    cout << "Year \t Anticipated World Population \t Numerical Increase\n";
    cout << year++ << "\t\t" << fixed << setprecision(0) << currentPopulation << "\t\t\t" << numericalIncrease << '\n';

    while (year <= 2047)
    {
        currentPopulation *= growthRate;
        numericalIncrease = currentPopulation * E * (growthRate / 100.0F);
        cout << year << "\t\t" << currentPopulation << "\t\t\t" << numericalIncrease << '\n';
        year++;
    }

    getch();
    return 0;
}