
#include <iostream>
#include <conio.h>
#include <string>

std::string &modify(std::string &, char (*modifier)(const char &));

int main()
{
    using namespace std;

    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = [](int x, int y)
    {
        return x + y;
    }(num1, num2);

    cout << num1 << " + " << num2 << " = " << result << '\n';

    // Lambda functions as call-backs
    auto encrypt = [](const char &ch)
    {
        return static_cast<char>(ch + 4);
    };

    auto decrypt = [](const char &ch)
    {
        return static_cast<char>(ch - 4);
    };

    string info{"Message is encrypted"};

    cout << modify(info, encrypt) << '\n';
    cout << modify(info, decrypt) << '\n';

    getch();
    return 0;
}

std::string &modify(std::string &st, char (*modifier)(const char &))
{
    for (auto &character : st)
    {
        character = modifier(character);
    }
    return st;
}
