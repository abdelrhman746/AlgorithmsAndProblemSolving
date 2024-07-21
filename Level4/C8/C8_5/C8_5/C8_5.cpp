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
short IsLeapMonth(short Year)
{
    return IsLeapYear(Year) ? 29 : 28;
}
short NumberOfDaysInMonth(short Year,short Month)
{
    if (Month <1||Month>12)
        return 0;
    
    if (Month == 2)
        return IsLeapYear(Year) ? 29 : 28;

    short arr31Days[7] = { 1,3,5,7,8,10,12 };
    
    for (short i = 1; i <= 7; i++)
    {
        if (arr31Days[i - 1] == Month)
            return 31;
    }
    
        return 30;
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
    short Month=ReadMonth();
    cout << "Number Of Days        in Month[" << Month << "] is " <<
        NumberOfDaysInMonth(Year, Month) << endl;
    cout << "Number Of Hours       in Month[" << Month << "] is " <<
        NumberOfHoursInMonth(Year, Month) << endl;
    cout << "Number Of Minutes     in Month[" << Month << "] is " <<
        NumberOfMinutesInMonth(Year, Month) << endl;
    cout << "Number Of Seconds     in Month[" << Month << "] is " <<
        NumberOfSecondsInYear(Year, Month) << endl;
    return 0;
}
