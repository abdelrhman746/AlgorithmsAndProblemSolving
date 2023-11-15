#include <iostream>
using namespace std;

void DayOfWeek()
{
    int Day;
   
    cout << "Please enter the Day!" << endl;
    cin >> Day;
    
    if (Day >= 1&&Day<=7)
    {
        if (Day == 1)
        {
            cout << "Sunday" << endl;
        }
        else if(Day==2)
        {
            cout << "Monday" << endl;
        }
        else if (Day == 3)
        {
            cout << "Tuesday" << endl;
        }
        else if (Day == 4)
        {
            cout << "Wednesday" << endl;
        }
        else if (Day == 5)
        {
            cout << "Thursday" << endl;
        }
        else if (Day == 6)
        {
            cout << "Friday" << endl;
        }
        else if (Day == 7)
        {
            cout << "Saterday" << endl;
        }
    }
    else
    {
        cout << "Wrong Day" << endl;
    }

}

int main()
{
    DayOfWeek();
}
