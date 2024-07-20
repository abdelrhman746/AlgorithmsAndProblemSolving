#include <iostream>
#include <cmath>
using namespace std;
enum enWeekDay { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saterday = 7 };

int ReadDayInRange(string Message,int LowerRange,int HigherRange)
{
    int Num;
    do
    {
        cout << Message << endl;
        cin >> Num;
    } while (!(Num >= LowerRange && Num<= HigherRange));

    return Num;
}

enWeekDay GetDayOfWeek(void)
{
    
    cout << "****************************************************************" << endl;
    cout << "Please Choose the number of the Day!" << endl;
    cout << "(1) Sunday " << endl;
    cout << "(2) Monday " << endl;
    cout << "(3) Tuesday " << endl;
    cout << "(4) Wednesday " << endl;
    cout << "(5) Thursday " << endl;
    cout << "(6) Friday " << endl;
    cout << "(7) Saterday " << endl;
    cout << "****************************************************************" << endl << endl;
    return (enWeekDay)ReadDayInRange("Your choice is :",1,7);

}



void PrintDayOfWeek(enWeekDay DayOfWeek)
{
    cout << "Your Choice is ";
    switch (DayOfWeek)
    {
    case enWeekDay::Sunday:
        cout << "Sunday" << endl;
        break;
    case enWeekDay::Monday:
        cout << "Monday" << endl;
        break;
    case enWeekDay::Tuesday:
        cout << "Tuesday" << endl;
        break;
    case enWeekDay::Wednesday:
        cout << "Wednesday" << endl;
        break;
    case enWeekDay::Thursday:
        cout << "Thursday" << endl;
        break;
    case enWeekDay::Friday:
        cout << "Friday" << endl;
        break;
    case enWeekDay::Saterday:
        cout << "Saterday" << endl;
        break;
    default:
        break;
    }
}

int main()
{
    PrintDayOfWeek(GetDayOfWeek());
}