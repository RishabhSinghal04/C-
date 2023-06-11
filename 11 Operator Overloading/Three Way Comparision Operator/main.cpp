
#include <iostream>
#include <conio.h>
#include <string>

#include "cuboid.h"

void ordering();

int main()
{
    using namespace std;

    // ordering();
    Cuboid cuboid1(10, 7, 16);
    Cuboid cuboid2(10, 7, 16);

    cout << boolalpha;
    cout << "cuboid1 == cuboid2 : " << (cuboid1 == cuboid2) << '\n';
    cout << "cuboid1 != cuboid2 : " << (cuboid1 != cuboid2) << '\n';
    cout << "cuboid1 >= cuboid2 : " << (cuboid1 >= cuboid2) << '\n';
    cout << "cuboid1 <= cuboid2 : " << (cuboid1 <= cuboid2) << '\n';
    cout << "cuboid1 > cuboid2 : " << (cuboid1 > cuboid2) << '\n';
    cout << "cuboid1 < cuboid2 : " << (cuboid1 < cuboid2) << '\n';

    Integer I1(10);
    Integer I2(1000);

    cout << "I1 == I2 : " << (I1 == I2) << '\n';
    cout << "I1 != I2 : " << (I1 != I2) << '\n';
    cout << "I1 >= I2 : " << (I1 >= I2) << '\n';
    cout << "I1 <= I2 : " << (I1 <= I2) << '\n';
    cout << "I1 > I2 : " << (I1 > I2) << '\n';
    cout << "I1 < I2 : " << (I1 < I2) << '\n';

    cout << "10 == I1 : " << (I1 == 10) << '\n';
    cout << "I1 == 10 : " << (10 == I1) << '\n';
    cout << "10 == I2 : " << (I2 == 10) << '\n';
    cout << "I2 == 10 : " << (10 == I2) << '\n';

    Int i1(50);
    Int i2(40);

    cout << "i1 == i2 : " << (i1 == i2) << '\n';
    cout << "i1 != i2 : " << (i1 != i2) << '\n';
    cout << "i1 >= i2 : " << (i1 >= i2) << '\n';
    cout << "i1 <= i2 : " << (i1 <= i2) << '\n';
    cout << "i1 > i2 : " << (i1 > i2) << '\n';
    cout << "i1 < i2 : " << (i1 < i2) << '\n';

    cout << "10 == i1 : " << (i1 == 10) << '\n';
    cout << "i1 == 10 : " << (10 == i1) << '\n';
    cout << "10 == i2 : " << (i2 == 10) << '\n';
    cout << "i2 == 10 : " << (10 == i2) << '\n';

    getch();
    return 0;
}

void ordering()
{
    using namespace std;

    int num1 = 10, num2 = 1000;
    auto result = num1 <=> num2;

    cout << boolalpha;
    cout << "num1 == num2 : " << (result == 0) << '\n';
    cout << "num1 >= num2 : " << (result >= 0) << '\n';
    cout << "num1 <= num2 : " << (result <= 0) << '\n';
    cout << "num1 != num2 : " << (result != 0) << '\n';
    cout << "num1 > num2 : " << (result > 0) << '\n';
    cout << "num1 < num2 : " << (result < 0) << '\n';

    string word1{"Hello"}, word2{"HELLO"};
    auto result2 = word1 <=> word2;

    cout << "word1 == word2 : " << (result2 == 0) << '\n';
    cout << "word1 < word2 : " << (result2 < 0) << '\n';
    cout << "word1 > word2 : " << (result2 > 0) << '\n';

    double real_num1 = 21.79, real_num2 = 21.7900;
    auto result3 = real_num1 <=> real_num2;

    cout << "real_num1 == real_num2 : " << (result3 == 0) << '\n';
    cout << "real_num1 < real_num2 : " << (result3 < 0) << '\n';
    cout << "real_num1 > real_num2 : " << (result3 > 0) << '\n';
}