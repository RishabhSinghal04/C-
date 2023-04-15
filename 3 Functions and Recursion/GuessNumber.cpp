/*
 * Choose the number to be guessed by selecting an integer at random in the range 1 to 1000.
 */

#include <iostream>
#include <conio.h>
#include <random>

using namespace std;

void guessNumber();

int main()
{
    guessNumber();

    getch();
    return 0;
}

void guessNumber()
{
    random_device rd;
    uniform_int_distribution<unsigned short> dist(1, 1000);

    unsigned short guessNumber, countGuesses = 0;
    const unsigned short num = dist(rd), countGuessLimit = 50;

    cout << "I have a number between 1 and 1000\nCan you guess my number?";
    do
    {
        cout << "\nPlease type your guess: ";
        cin >> guessNumber;
        countGuesses++;

        if (guessNumber == num)
        {
            cout << "Excellent! You guessed the number!\n";
        }
        else if (guessNumber < num)
        {
            cout << "Too low. Try again.\n";
        }
        else
        {
            cout << "Too high. Try again.\n";
        }
    } while (guessNumber != num && countGuesses < countGuessLimit);

    if (countGuesses < 10)
    {
        cout << "\nEither you know the secret or you got lucky!";
    }
    else if (countGuesses == 10)
    {
        cout << "\nAhah! You know the secret!";
    }
    else
    {
        (countGuesses >= countGuessLimit && guessNumber != num) ? cout << "\nYou couldn't guess the number.\nIt was " << num : cout << "\nYou should be able to do better!";
    }
}