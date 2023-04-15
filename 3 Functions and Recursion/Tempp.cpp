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

/**
 * @brief To check whether answer is correct or not
 * @param  char operator selected
 * @param  short 1st number
 * @param  short 2nd number
 * @param  long_long answer
 * @return boolean
 */
bool checkAnswer(char &, short &, short &, long long &);

inline void SelectOperatorType();
inline void SelectDifficultyLevel();

inline void AdditionOfTwoNumbersQuestion(short &, short &);
inline void SubtractionOfTwoNumbersQuestion(short &, short &);
inline void MultiplicationOfTwoNumbersQuestion(short &, short &);
inline void DivisionOfTwoNumbersQuestion(short &, short &);

inline void displayResult(float &);
inline float calculatePercentage(unsigned short &, const unsigned short &);

void questionAnswer();
/**
 * @brief Set range for random numbers on the basis of level of difficulty
 * @param unsigned_short level of difficulty
 * @param unsigned_short minimum
 * @param unsigned_short maximum
 */
void rangeOfRandomNumbers(unsigned short &, short &, short &);
void displayQuestion(char &, short &, short &);

inline int additionOfTwoNumbers(short &, short &);
inline int subtractionOfTwoNumbers(short &, short &);
inline long long multiplicationOfTwoNumbers(short &, short &);
inline short divisionOfTwoNumbers(short &, short &);

int main()
{
    questionAnswer();

    cout << "Exit....";

    getch();
    return 0;
}

void questionAnswer()
{
    const unsigned short numberOfQuestions = 10; // Total number of questions
    unsigned short questionCount = 0, score = 0;
    short randNum1, randNum2; // Store randomly generated numbers
    short min = 0, max = 0;   // Store minimum and maximum range as per the difficulty level
    long long answer;         // Store answer
    float percentage = 0.0F;  // Calculate percentage as per the score

    const unsigned short width = static_cast<unsigned short>(log10(numberOfQuestions)) + 1; // set alignment for question number

    char selectOperator;       // Store an operator
    unsigned short difficulty; // Store difficulty level

    SelectDifficultyLevel();
    cin >> difficulty;

    SelectOperatorType();
    rangeOfRandomNumbers(difficulty, min, max); // According to difficulty level, set range of random integers

    random_device rd;
    uniform_int_distribution<short> dist(min, max); // Random integers between min and max
    do
    {
        randNum1 = dist(rd); // Store a randomly generated number
        randNum2 = dist(rd); // Store a randomly generated number

        cout << "\nSelect Operator: ";
        cin >> selectOperator;

        while (selectOperator == '/' && randNum2 == 0) // Selected operator is '/' and divisor is 0
        {
            randNum2 = dist(rd);
        }

        cout << "\nQ" << setw(width) << ++questionCount << ". "; // Display question number
        displayQuestion(selectOperator, randNum1, randNum2);

        cout << "\nAnswer: ";
        cin >> answer;

        if (checkAnswer(selectOperator, randNum1, randNum2, answer)) // If answer is correct
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

inline void SelectDifficultyLevel()
{
    cout << "\nLevel 1 : Single digit positive integers\nLevel 2 : Double digit positive integers\nLevel 3 : Triple digit positive integers\nLevel 4 : Triple digit integers\n";
    cout << "Enter your difficulty level: ";
}

inline void SelectOperatorType()
{
    char choice;
    cout << "\nAddition : '+'\nSubtraction : '-'\nMultiplication : '*'\nDivision : '/'\n";
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

void displayQuestion(char &operatorSelected, short &num1, short &num2)
{

    switch (operatorSelected)
    {
    case '+':
        AdditionOfTwoNumbersQuestion(num1, num2);
        break;
    case '-':
        SubtractionOfTwoNumbersQuestion(num1, num2);
        break;
    case '*':
        MultiplicationOfTwoNumbersQuestion(num1, num2);
        break;
    case '/':
        DivisionOfTwoNumbersQuestion(num1, num2);
        break;

    default:
        cout << "INVALID! Giving you a multiplication question:-\n";
        MultiplicationOfTwoNumbersQuestion(num1, num2);
        break;
    }
}

bool checkAnswer(char &operatorSelected, short &num1, short &num2, long long &answer)
{
    bool isAnswerCorrect;
    switch (operatorSelected)
    {
    case '+':
        isAnswerCorrect = (answer == additionOfTwoNumbers(num1, num2)) ? true : false;
        break;
    case '-':
        isAnswerCorrect = (answer == subtractionOfTwoNumbers(num1, num2)) ? true : false;
        break;
    case '*':
        isAnswerCorrect = (answer == multiplicationOfTwoNumbers(num1, num2)) ? true : false;
        break;
    case '/':
        isAnswerCorrect = (answer == divisionOfTwoNumbers(num1, num2)) ? true : false;
        break;
    default:
        isAnswerCorrect = (answer == multiplicationOfTwoNumbers(num1, num2)) ? true : false;
        break;
    }
    return isAnswerCorrect;
}

inline void AdditionOfTwoNumbersQuestion(short &num1, short &num2)
{
    cout << "How much is " << num1 << " + " << num2 << '?';
}

inline void SubtractionOfTwoNumbersQuestion(short &num1, short &num2)
{
    cout << "How much is " << num1 << " - " << num2 << '?';
}

inline void MultiplicationOfTwoNumbersQuestion(short &num1, short &num2)
{
    cout << "How much is " << num1 << " times " << num2 << '?';
}

inline void DivisionOfTwoNumbersQuestion(short &num1, short &num2)
{
    cout << "How much is " << num1 << " by " << num2 << " (quotient only)?";
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

inline int additionOfTwoNumbers(short &num1, short &num2)
{
    return num1 + num2;
}

inline int subtractionOfTwoNumbers(short &num1, short &num2)
{
    return num1 - num2;
}

inline long long multiplicationOfTwoNumbers(short &num1, short &num2)
{
    return num1 * num2;
}

inline short divisionOfTwoNumbers(short &num1, short &num2)
{
    return num1 / num2;
}