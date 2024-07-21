#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

short ReadYear()
{
    short Year;
    cout << "\nPlease enter a year? ";
    cin >> Year;
    return Year;
}

short ReadMonth()
{
    short Month;
    cout << "\nPlease enter a Month? ";
    cin >> Month;
    return Month;
}
short ReadDay()
{
    short Day;
    cout << "\nPlease enter a Day ? ";
    cin >> Day;
    return Day;
}

short GetDayOrder(short Day, short Month, short Year)
{
    int a, y, m, d;
    a = ((14 - Month) / 12);
    y = Year - a;
    m = Month + (12 * a) - 2;
    d = (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
    return d;
}
string DayShortName(short DayOrder)
{
    string arrDayOrder[] = { "Sun","Mon","Tue","Wed","Thurs","Fri","Sat" };
    return arrDayOrder[DayOrder];
}
int main()
{
    
    short Year = ReadYear();
    short Month = ReadMonth();
    short Day = ReadDay();
    short DayOrder = GetDayOrder(Day, Month, Year);
    cout << "Date            :" << Day << "/" << Month << "/" << Year << endl;
    cout << "Day Order       :" << DayOrder << endl;
    cout << "Day Name        :" << DayShortName(DayOrder) << endl;
    return 0;
}
