#pragma warning(disable : 4996)
#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>
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

    short RemainingDays = Days + CountNumberOfDays(Date.Day, Date.Month, Date.Year);
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
void PrintDateFromCurrentDate(sDate Date, short NumberOfDaysToAdd)
{
    Date = DateAddDays(NumberOfDaysToAdd, Date);

    printf("Date after adding [%d] days is: %d/%d/%d", NumberOfDaysToAdd, Date.Day, Date.Month, Date.Year);
}
bool IsDate1BeforeDate2(sDate Date1, sDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? ((Date1.Month < Date2.Month) ? true : (Date1.Month == Date2.Month ? (Date1.Day < Date2.Day) : false)) : false);
}
bool IsDate1EqualDate2(sDate Date1, sDate Date2)
{
    return (Date1.Year == Date2.Year ? (Date1.Month == Date2.Month ? (Date1.Day == Date2.Day ? true : false) : false) : false);
}
bool IsLastDayInMonth(sDate Date)
{
    return (Date.Day == NumberOfDaysInMonth(Date.Year, Date.Month) ? true : false);
}
bool IsLastMonthInYear(short Month)
{
    return (Month == 12 ? true : false);
}
sDate IncreaseDateByOneDay(sDate Date)
{
    if (IsLastDayInMonth(Date))
    {
        Date.Day = 1;
        if (IsLastMonthInYear(Date.Month))
        {
            Date.Year++;
            Date.Month = 1;
        }
        else
        {
            Date.Month++;
        }
    }
    else
    {
        Date.Day++;

    }
    return Date;
}

void SwapDates(sDate& Date1, sDate& Date2)
{
    sDate Temp;

    Temp = Date1;
    Date1 = Date2;
    Date2 = Temp;
}
int GetDateDifferenceInDays(sDate Date1, sDate Date2, bool IncludeEndDay = false)
{
    int Days = 0;
    short SwapFlagValue = 1;

    if (!IsDate1BeforeDate2(Date1, Date2))
    {
        //Swap Dates

        SwapDates(Date1, Date2);
        SwapFlagValue = -1;
    }
    while (IsDate1BeforeDate2(Date1, Date2))
    {
        Days++;
        Date1 = IncreaseDateByOneDay(Date1);
    }
    return  IncludeEndDay ? ++Days * SwapFlagValue : Days * SwapFlagValue;
}

sDate GetSystemDate()
{
    sDate SystemDate;

    time_t t = time(0);
    tm* now = localtime(&t);

    SystemDate.Day = now->tm_mday;
    SystemDate.Month = now->tm_mon + 1;
    SystemDate.Year = now->tm_year + 1900;

    return SystemDate;
}

int GetYourAgeInDays()
{
    cout << "Please Enter Your Date of Birth:\n\n";

    sDate DateOfBirth = ReadFullDate();
    sDate SystemDate = GetSystemDate();

    return GetDateDifferenceInDays(DateOfBirth, SystemDate, true);
}
sDate IncreaseDateByOneWeek(sDate Date)
{
    short i = 1;
    for (i = 1; i <= 7; i++)
    {
        Date = IncreaseDateByOneDay(Date);
    }
    return Date;
}
sDate IncreaseDateByXWeeks(sDate Date, short Weeks)
{
    short i = 1;
    for (i = 1; i <= Weeks; i++)
    {
        Date = IncreaseDateByOneWeek(Date);
    }
    return Date;
}
sDate IncreaseDateByXDays(sDate Date, short Days)
{
    short i = 1;
    for (i = 1; i <= Days; i++)
    {
        Date = IncreaseDateByOneDay(Date);
    }
    return Date;
}
sDate IncreaseDateByOneMonth(sDate Date)
{
    if (Date.Month == 12)
    {
        Date.Month = 1;
        Date.Year++;
    }
    else
    {
        Date.Month++;
    }
    short NumberOfDaysInCurrentMonth = NumberOfDaysInMonth(Date.Year, Date.Month);
    if (Date.Day > NumberOfDaysInCurrentMonth)
    {
        Date.Day = NumberOfDaysInCurrentMonth;
    }

    return Date;
}
sDate IncreaseDateByXMonths(sDate Date, short Months)
{
    short i = 1;
    for (i = 1; i <= Months; i++)
    {
        Date = IncreaseDateByOneMonth(Date);
    }
    return Date;
}
sDate IncreaseDateByOneYear(sDate Date)
{
    Date.Year++;
    return Date;
}
sDate IncreaseDateByXYears(sDate Date, short Years)
{
    short i = 1;
    for (i = 1; i <= Years; i++)
    {
        Date = IncreaseDateByOneYear(Date);
    }
    return Date;
}
sDate IncreaseDateByXYearsFaster(sDate Date, short Years)
{
    Date.Year += Years;
    return Date;
}
sDate IncreaseDateByOneDecade(sDate Date)
{

    Date.Year += 10;
    return Date;
}
sDate IncreaseDateByXDecades(sDate Date, short Decades)
{
    short i = 1;
    for (i = 1; i <= Decades; i++)
    {
        Date = IncreaseDateByOneDecade(Date);
    }
    return Date;
}
sDate IncreaseDateByXDecadesFaster(sDate Date, short Decades)
{
    Date.Year += (10 * Decades);

    return Date;
}
sDate IncreaseDateByOneCentury(sDate Date)
{
    Date.Year += 100;

    return Date;
}
sDate IncreaseDateByOneMillennium(sDate Date)
{
    Date.Year += 1000;

    return Date;
}
int main()
{
    sDate Date = ReadFullDate();
    short Days = 10;
    short Weeks = 10;
    short Months = 5;
    short Years = 10;
    short Decades = 10;
    Date = IncreaseDateByOneDay(Date);
    printf("01-Adding  one day is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);
    Date = IncreaseDateByXDays(Date, Days);
    printf("02-Adding %d days is: %d/%d/%d\n", Days, Date.Day, Date.Month, Date.Year);
    Date = IncreaseDateByOneWeek(Date);
    printf("03-Adding one week is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);
    Date = IncreaseDateByXWeeks(Date, 10);
    printf("04-Adding %d week is: %d/%d/%d\n", Weeks, Date.Day, Date.Month, Date.Year);
    Date = IncreaseDateByOneMonth(Date);
    printf("05-Adding one Month is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);
    Date = IncreaseDateByXMonths(Date, Months);
    printf("06-Adding %d Months is: %d/%d/%d\n", Months, Date.Day, Date.Month, Date.Year);
    Date = IncreaseDateByOneYear(Date);
    printf("07-Adding one year is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);
    Date = IncreaseDateByXYears(Date, Years);
    printf("08-Adding %d years is: %d/%d/%d\n", Years, Date.Day, Date.Month, Date.Year);
    Date = IncreaseDateByXYearsFaster(Date, Years);
    printf("09-Adding %d years (Faster) is: %d/%d/%d\n", Years, Date.Day, Date.Month, Date.Year);
    Date = IncreaseDateByOneDecade(Date);
    printf("10-Adding One Decade is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);
    Date = IncreaseDateByXDecades(Date, Decades);
    printf("11-Adding %d Decades is: %d/%d/%d\n", Decades, Date.Day, Date.Month, Date.Year);
    Date = IncreaseDateByXDecadesFaster(Date, Decades);
    printf("12-Adding %d Decades (Faster) is: %d/%d/%d\n", Decades, Date.Day, Date.Month, Date.Year);
    Date = IncreaseDateByOneCentury(Date);
    printf("13-Adding One Century is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);
    Date = IncreaseDateByOneMillennium(Date);
    printf("14-Adding One Millennium is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);
    system("pause>0");

    return 0;
}


