#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

short ReadYear()
{
    short Year;
    cout << "\nPlease enter a year to check? ";
    cin >> Year;
    return Year;
}

short ReadMonth()
{
    short Month;
    cout << "\nPlease enter a Month to check? ";
    cin >> Month;
    return Month;
}
bool IsLeapYear(int Year)
{

    return ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));

}

short NumberOfDaysInMonth(short Year, short Month)
{
    if (Month < 1 || Month>12)
        return 0;
    
    int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month-1];
}
short NumberOfHoursInMonth(short Year, short Month)
{
    return NumberOfDaysInMonth(Year, Month) * 24;
}
int NumberOfMinutesInMonth(short Year, short Month)
{
    return NumberOfHoursInMonth(Year, Month) * 60;
}
int NumberOfSecondsInYear(short Year, short Month)
{
    return NumberOfMinutesInMonth(Year, Month) * 60;
}
int main()
{
    short Year = ReadYear();
    short Month = ReadMonth();
    cout << "Number Of Days        in Month[" << Year << "] is " <<
        NumberOfDaysInMonth(Year, Month) << endl;
    cout << "Number Of Hours       in Month[" << Year << "] is " <<
        NumberOfHoursInMonth(Year, Month) << endl;
    cout << "Number Of Minutes     in Month[" << Year << "] is " <<
        NumberOfMinutesInMonth(Year, Month) << endl;
    cout << "Number Of Seconds     in Month[" << Year << "] is " <<
        NumberOfSecondsInYear(Year, Month) << endl;
    return 0;
}
