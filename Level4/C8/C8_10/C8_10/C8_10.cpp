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
bool IsLeapYear(int Year)
{

    return ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));

}

short NumberOfDaysInMonth(short Year, short Month)
{
    if (Month < 1 || Month>12)
        return 0;

    int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
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
string MonthShortName(short Month)
{
    string arrMonthOrder[] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
    return arrMonthOrder[Month - 1];
}
void PrintMonthCalender(short Month, short Year)
{
    short DaysOfMonth = NumberOfDaysInMonth(Year, Month);

    short counter = 1;
    bool start = false;
    short i = 0;

    cout << " ____________" << MonthShortName(Month) << "____________" << endl;
    cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;
    short current = GetDayOrder(1, Month, Year);
    for (i = 0; i < current; i++)
        cout << "    ";

    for (short j = 1; j <= DaysOfMonth; j++)
    {
        printf("%4d", j);
        if (++i == 7)
        {
            i = 0;
            cout << endl;
        }
    }
    cout << endl;
    cout << " ___________________________" << endl << endl;
}
void PrintYearCalender(short Year)
{
    cout << " ___________________________" << endl << endl;
    printf("      Calender - %d           \n", Year);
    cout << " ___________________________" << endl << endl;
    for (short i = 1; i <= 12; i++)
    {
        PrintMonthCalender(i, Year);
    }

}
short CountNumberOfDays(short Day, short Month, short Year)
{
    short i;
    short NumberOfDays = 0;
    for (i = 1; i < Month; i++)
    {
        NumberOfDays += NumberOfDaysInMonth(Year, i);
    }
    NumberOfDays += Day;
    return NumberOfDays;
}
void PrintNumberOfDaysFromBeginingOfYear(short Day, short Month, short Year)
{
    printf("Number of days from the begining of the year is %d", CountNumberOfDays(Day, Month, Year));
}
int main()
{

    short Day = ReadDay();
    short Month = ReadMonth();
    short Year = ReadYear();

    PrintNumberOfDaysFromBeginingOfYear(Day, Month, Year);
    system("pause>0");
    return 0;
}


