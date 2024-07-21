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
bool LeapYearNotLeapYear(int Number)
{
    
    return ((Number % 400 == 0) || (Number % 4 == 0 && Number % 100 != 0));
    
}
int main()
{
    short Year = ReadYear();
    if (LeapYearNotLeapYear(Year))
    {
        cout << "\nYes, Year [" << Year << "] is a leap year.\n";
    }
    else
    {
        cout << "\nNo, Year [" << Year << "] is NOT a leap year.\n";
    }


    return 0;
}
