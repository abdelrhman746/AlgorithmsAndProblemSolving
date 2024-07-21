#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct sDate
{
    short Year;
    short Month;
    short Day;
};
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
short ReadNumberOfDaysToAdd()
{
    short NumberOfDaysToAdd;
    cout << "\nHow many days to add ? ";
    cin >> NumberOfDaysToAdd;
    return NumberOfDaysToAdd;
}
sDate ReadFullDate()
{
    sDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
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
sDate GetDayFromDayOrderInYear(short DayOrderInYear, short Year)
{
    sDate Date;
    short RemainingDays = DayOrderInYear;
    short MonthDays = 0;
    Date.Year = Year;
    Date.Month = 1;
    while (RemainingDays != 0)
    {
        MonthDays = NumberOfDaysInMonth(Year, Date.Month);
        if (RemainingDays > MonthDays)
        {
            RemainingDays -= MonthDays;
            Date.Month++;
        }
        else
        {
            Date.Day = RemainingDays;
            break;
        }

    }
    return Date;
}
sDate DateAddDays(short Days, sDate Date)
{
    
    short RemainingDays = Days+ CountNumberOfDays(Date.Day, Date.Month, Date.Year);
    short MonthDays = 0;
    Date.Month = 1;
    while (true)
    {
        MonthDays = NumberOfDaysInMonth(Date.Year, Date.Month);
        if (RemainingDays > MonthDays)
        {
            RemainingDays -= MonthDays;
            Date.Month++;
            if (Date.Month > 12)
            {
                Date.Month = 1;
                Date.Year++;
            }
        }
        else
        {
            Date.Day = RemainingDays;
            break;
        }
    }
    return Date;
}
void PrintNumberOfDaysFromBeginingOfYearandPrintDateFromDayOrderInYear(short Day, short Month, short Year)
{
    sDate Date;
    short DayOrderInYear = CountNumberOfDays(Day, Month, Year);
    printf("\nNumber of days from the begining of the year is %d\n\n", DayOrderInYear);
    Date = GetDayFromDayOrderInYear(DayOrderInYear, Year);
    printf("Date for [%d] is: %d/%d/%d \n", DayOrderInYear, Date.Day, Date.Month, Date.Year);

}
void PrintDateFromCurrentDate(sDate Date,short NumberOfDaysToAdd)
{
    Date = DateAddDays(NumberOfDaysToAdd, Date);

    printf("Date after adding [%d] days is: %d/%d/%d", NumberOfDaysToAdd, Date.Day,Date.Month,Date.Year);
}
int main()
{
    sDate Date = ReadFullDate();
 
    short NumberOfDaysToAdd = ReadNumberOfDaysToAdd();
    PrintDateFromCurrentDate(Date, NumberOfDaysToAdd);

    return 0;
}


