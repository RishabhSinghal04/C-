
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

/**
 * @brief Name of all week days
 */
enum class WeekDays : unsigned char
{
    Mon,
    Tue,
    Wed,
    Thurs,
    Fri,
    Sat,
    Sun
};

/**
 * @brief Name of all months
 */
enum class Months : unsigned char
{
    Jan,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sept,
    Oct,
    Nov,
    Dec,
};

string_view monthToString(Months);
string_view weekDayToString(WeekDays);

int main()
{
    cout << monthToString(Months::Apr) << '\n';
    cout << weekDayToString(WeekDays::Fri);

    getch();
    return 0;
}

string_view monthToString(Months month)
{
    switch (month)
    {
        using enum Months;
    case Jan:
        return "January";
    case Feb:
        return "February";
    case Mar:
        return "March";
    case Apr:
        return "April";
    case May:
        return "May";
    case Jun:
        return "June";
    case Jul:
        return "July";
    case Aug:
        return "August";
    case Sept:
        return "September";
    case Oct:
        return "October";
    case Nov:
        return "November";
    case Dec:
        return "December";

    default:
        break;
    }
    return "";
}

string_view weekDayToString(WeekDays weekDay)
{
    switch (weekDay)
    {
        using enum WeekDays;
    case Mon:
        return "Monday";
    case Tue:
        return "Tuesday";
    case Wed:
        return "Wednesday";
    case Thurs:
        return "Thursday";
    case Fri:
        return "Friday";
    case Sat:
        return "Satday";
    case Sun:
        return "Sunday";

    default:
        break;
    }
    return "";
}