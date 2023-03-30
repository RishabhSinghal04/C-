/*
 * Develop a program that will determine whether a department-store customer has exceeded the credit card limit on a charge account.
 *
 * For each customer, the following facts are available:-
 * A. Account number (an integer)
 * B. Balance at the beginning of the month
 * C. Total of all items charged by this customer this month
 * D. Total of all credits applied to this customer's account this month
 * E. Allowed credit limit
 *
 * Calculate the new balance = beginning balance + charges - credits and determine whether the new balance exceeds the customer's credit limit.
 * For those customers whose credit limit is exceeded, the program shoult display the customer's account, credit limit, new balance and the message "Credit Limit Exceeded".
 */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    unsigned int account_num;
    float beginning_balance, total_charges, total_credits, credit_limit, new_balance = 0.0F;

    do
    {
        cout << "Enter account number (0 to quit): ";
        cin >> account_num;

        if (account_num == 0) // If -1 -> Quit, else miles driven cannot be negative
        {
            cout << "Press any key....";
            break;
        }
        else if (account_num > INT_MAX)
        {
            cerr << "Overflow";
            break;
        }

        cout << "Enter beginning balance: ";
        cin >> beginning_balance;
        cout << "Enter total charges: ";
        cin >> total_charges;
        cout << "Enter totoal credits: ";
        cin >> total_credits;
        cout << "Enter credit card limit: ";
        cin >> credit_limit;

        new_balance = beginning_balance + total_charges - total_credits;
        cout << "New balance is " << new_balance << '\n';

        if (new_balance > credit_limit)
        {
            cout << "\nAccount Number: " << account_num << '\n';
            cout << "Credit Limits: " << credit_limit << '\n';
            cout << "Balance: " << new_balance << '\n';
            cout << "Credit Limit Exceede\n\n";
        }
    } while (account_num > 0);

    getch();
    return 0;
}