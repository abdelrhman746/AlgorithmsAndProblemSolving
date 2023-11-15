#include <iostream>
using namespace std;

enum enWeekDay{ Sunday = 1,Monday = 2,Tuesday = 3,Wednesday = 4,Thursday = 5,Friday = 6,Saterday = 7 };

void DayOfWeek()
{
    int Day;
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
    cout << "Your choice is :" ;
    cin >> Day;
    enWeekDay WeekDay;
    WeekDay = (enWeekDay)Day;
    

    switch (WeekDay)
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
        cout << "Not a Week Day" << endl;
        break;
    }
}

int main()
{
    DayOfWeek();
}
