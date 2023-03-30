/*
 * The salespeople each receive $200 per week plus 9% of their gross sales for that week.
 * For example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of $5000.
 * Develop a program to input each salesperson's gross sales for last week.
 * Calculate and displaythat salesperson's earnings.
 */

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    float sales, salary = 0.0F;

    do
    {
        cout << "Enter sales in dollars (-1 to end): ";
        cin >> sales;

        if (sales < 0.0F)
        {
            (sales == -1.0F) ? cout << "Press any key...." : cout << "Sales cannot be negative";
            break;
        }

        salary = 200 + 0.09 * sales;
        cout << fixed << setprecision(2);
        cout << "Salary is $" << salary << "\n\n";

    } while (sales > 0);

    getch();
    return 0;
}