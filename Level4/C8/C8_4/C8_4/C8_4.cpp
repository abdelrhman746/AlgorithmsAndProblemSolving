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
bool IsLeapYear(int Year)
{

    return ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));

}

short NumberOfDaysInYear(short Year)
{
    return IsLeapYear(Year) ? 366 : 365;
}
short NumberOfHoursInYear(short Year)
{
    return NumberOfDaysInYear(Year) *24;
}
int NumberOfMinutesInYear(short Year)
{
    return NumberOfHoursInYear(Year) * 60;
}
int NumberOfSecondsInYear(short Year)
{
    return NumberOfMinutesInYear(Year) * 60;
}
int main()
{
    short Year = ReadYear();
    
    cout << "Number Of Days        in Year[" << Year << "] is " <<
        NumberOfDaysInYear(Year) << endl;
    cout << "Number Of Hours       in Year[" << Year << "] is " << 
        NumberOfHoursInYear(Year) << endl;
    cout << "Number Of Minutes     in Year[" << Year << "] is " << 
        NumberOfMinutesInYear(Year) << endl;
    cout << "Number Of Seconds     in Year[" << Year << "] is " << 
        NumberOfSecondsInYear(Year) << endl;
    return 0;
}
