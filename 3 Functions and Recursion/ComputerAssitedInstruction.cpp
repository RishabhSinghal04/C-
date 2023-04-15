/*
 * A program to generate basic questions in mathematics.
 * A student must answer each question and get a score of 75% or more to reach next level otherwise needed teacher's attention.
 */

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
#include <random>

using namespace std;

void questionAnswer();
/**
 * @brief Set range for random numbers on the basis of level of difficulty
 * @param unsigned_short level of difficulty
 * @param unsigned_short minimum
 * @param unsigned_short maximum
 */
void rangeOfRandomNumbers(unsigned short &, short &, short &);

inline void displayQuestion(short &, short &);
inline void displayResult(float &);
inline float calculatePercentage(unsigned short &, const unsigned short &);

int main()
{
    cout << "Multiplication of Two Numbers\n";
    questionAnswer();

    cout << "Exit....";

    getch();
    return 0;
}

void questionAnswer()
{
    const unsigned short numberOfQuestions = 10; // Total number of questions
    unsigned short questionCount = 0, score = 0, difficultyLevel;
    short randNum1, randNum2; // Store randomly generated numbers
    short min = 0, max = 0;   // Store minimum and maximum range as per the difficulty level
    long long answer;         // Store answer
    float percentage = 0.0F;  // Calculate percentage as per the score

    const unsigned short width = static_cast<unsigned short>(log10(numberOfQuestions)) + 1; // set alignment for question number

    cout << "\nLevel 1 : Single digit positive integers\nLevel 2 : Double digit positive integers\nLevel 3 : Triple digit positive integers\nLevel 4 : Triple digit integers\n";
    cout << "Enter your difficulty level: ";
    cin >> difficultyLevel;
    rangeOfRandomNumbers(difficultyLevel, min, max);

    random_device rd;
    uniform_int_distribution<short> dist(min, max); // Random integers between min and max
    do
    {
        randNum1 = dist(rd); // Store a randomly generated number
        randNum2 = dist(rd); // Store a randomly generated number

        cout << "\nQ" << setw(width) << ++questionCount << ". "; // Display question number
        displayQuestion(randNum1, randNum2);
        cout << "\nAnswer: ";
        cin >> answer;

        if (answer == randNum1 * randNum2) // If answer is correct, increment score by one
        {
            cout << "Correct\n";
            score++;
        }
        else // If answer is incorrect
        {
            cout << "Incorrect\n";
        }
    } while (questionCount < numberOfQuestions);

    percentage = calculatePercentage(score, numberOfQuestions);
    displayResult(percentage);
}

void rangeOfRandomNumbers(unsigned short &difficultyLevel, short &min, short &max)
{
    switch (difficultyLevel)
    {
    case 1: // Only single digit positive integers
        max = 9;
        break;
    case 2: // Double digit positive integers
        max = 99;
        break;
    case 3: // Triple digit positive integers
        max = 999;
        break;
    case 4: // Triple digit integers
        min = -999;
        max = 999;
        break;

    default:
        cout << "INVALID";
        break;
    }
}

inline void displayQuestion(short &num1, short &num2)
{
    cout << "How much is " << num1 << " times " << num2 << '?';
}

inline float calculatePercentage(unsigned short &score, const unsigned short &totalQuestions)
{
    return static_cast<float>(score) / totalQuestions * 100.0F;
}

inline void displayResult(float &percentage)
{
    cout << "\nPercentage Scored " << percentage << '\n';
    (percentage >= 75.0F) ? cout << "Congratulations, you are ready to go to the next level!\n" : cout << "Please ask your teaher for extra help\n";
}