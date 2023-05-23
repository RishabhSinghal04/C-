
#include <iostream>
#include <conio.h>

using namespace std;

/**
 * @brief Name of all week days
 */
enum class WeekDays
{
    Monday = 1,
    Mon = Monday,
    Tuesday,
    Wednesday,
    Wed = Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sat = Saturday,
    Sunday
};

/**
 * @brief Name of all months
 */
enum class Months : unsigned char
{
    January = 1,
    Jan = January,
    February,
    Feb = February,
    March,
    Mar = March,
    April,
    Apr = April,
    May,
    June,
    Jun = June,
    July,
    Jul = July,
    August,
    Aug = August,
    September,
    Sept = September,
    October,
    Oct = October,
    November,
    Nov = November,
    December,
    Dec = December
};

int main()
{
    WeekDays weekDay = WeekDays::Monday;
    Months month = Months::Aug;

    cout << "Week Days : -\n";
    cout << sizeof(WeekDays) << '\n';
    cout << static_cast<int>(weekDay) << '\n';
    cout << static_cast<int>(WeekDays::Tuesday) << '\n';

    cout << "Months:-\n";
    cout << sizeof(Months) << '\n';
    cout << static_cast<int>(month) << '\n';

    month = Months::Dec;
    cout << static_cast<int>(month) << '\n';

    getch();
    return 0;
}