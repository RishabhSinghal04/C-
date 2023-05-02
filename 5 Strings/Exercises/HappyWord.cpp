
#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>

using namespace std;

/**
 * @brief  A function to check whether a big number is a happy number or not
 * @param  *: Array
 * @param  &: Size of array
 * @retval Boolean Value
 */
bool isHappyNumber(uint16_t *, uint16_t &);

/**
 * @brief A function to check whether a word is a happy word or not
 * @param  std::string
 * @return Boolean Value
 */
bool isHappyWord(string &);

int main()
{
    string word{};

    cout << "Enter a word: ";
    cin >> word;

    isHappyWord(word)
        ? cout << '\"' << word << "\" is a Happy Word"
        : cout << '\"' << word << "\" is not a Happy Word";

    getch();
    return 0;
}

bool isHappyNumber(uint16_t *bigNum, uint16_t &numOfDigits)
{
    uint32_t sum = 0U;
    for (uint16_t i = 0; i < numOfDigits; ++i)
    {
        // sum of square of each digit
        sum += static_cast<unsigned int>(pow(bigNum[i], 2.0));
    }
    delete[] bigNum;
    bigNum = nullptr;

    while (sum > 9)
    {
        uint32_t temp = sum;
        sum = 0U;
        while (temp > 0)
        {
            sum += static_cast<uint32_t>(pow(temp % 10, 2.0));
            temp /= 10;
        }
    }

    return (sum == 1) ? true : false;
}

bool isHappyWord(string &word)
{
    uint16_t numOfDigits = 0;
    uint16_t *bigNum = new uint16_t[numOfDigits];
    uint16_t placeValue = 0, index = 0, countDigits = 0;

    for (auto &character : word)
    {
        placeValue = static_cast<uint16_t>(tolower(character)) - 96;
        countDigits = static_cast<uint16_t>(log10(placeValue)) + 1;

        if (countDigits == 1)
        {
            numOfDigits++;
            bigNum[index] = placeValue;
        }
        else if (countDigits == 2)
        {
            numOfDigits += 2;
            bigNum[index++] = placeValue / 10;
            bigNum[index] = placeValue % 10;
        }
        ++index;
    }

    bool result = isHappyNumber(bigNum, numOfDigits) ? true : false;
    bigNum = nullptr;

    return result;
}