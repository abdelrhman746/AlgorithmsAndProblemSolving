#include <iostream>
#include <  cmath >

using namespace std;
// Task Duration in seconds

void TaskDurationInSecondsProcedure()
{
    double NumberOfDays, NumberOfHrs, NumberOfMins, NumberOfSec;
    cout << "Please enter your  Number Of Days" << endl;
    cin >> NumberOfDays;
    cout << "Please enter your  Number Of Hours" << endl;
    cin >> NumberOfHrs;
    cout << "Please enter your  Number Of Minutes" << endl;
    cin >> NumberOfMins;
    cout << "Please enter your  Number Of Seconds" << endl;
    cin >> NumberOfSec;
    double Total_seconds = NumberOfDays * 24 * 60 * 60 + NumberOfHrs * 60 * 60 + NumberOfMins * 60 + NumberOfSec;
    cout << "The Total seconds is : " << round(Total_seconds) << " seconds" << endl;
}
int main()
{
    TaskDurationInSecondsProcedure();
}
