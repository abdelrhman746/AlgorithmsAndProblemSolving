#include <iostream>
#include <cmath>
using namespace std;

struct stNumbers
{
    float NumberOfSecs;
    float NumberOfMins;
    float NumberOfHours;
    float NumberOfDays;
};

float ReadPostiveNumbers(string Message)
{
    float Num;
    do
    {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);

    return Num;
}

stNumbers GetNumberOfSecsMinsHoursDays(void)
{
    stNumbers Numbers;
    Numbers.NumberOfDays = ReadPostiveNumbers("Please enter the number of Days");
    Numbers.NumberOfHours = ReadPostiveNumbers("Please enter the number of Hours");
    Numbers.NumberOfMins = ReadPostiveNumbers("Please enter the number of Mins");
    Numbers.NumberOfSecs = ReadPostiveNumbers("Please enter the number of Secs");

    return Numbers;
}

float CalculateTaskDuration(stNumbers Numbers)
{
    float TotalSeconds=0;

    TotalSeconds += (Numbers.NumberOfDays * 24 * 60 * 60);
    TotalSeconds += (Numbers.NumberOfHours * 60 * 60);
    TotalSeconds += (Numbers.NumberOfMins * 60);
    TotalSeconds += Numbers.NumberOfSecs ;

    return TotalSeconds;
}

void PrintTaskDuration(float TotalSeconds)
{
    cout << "Total Seconds = " << TotalSeconds << endl;
}

int main()
{
    PrintTaskDuration(CalculateTaskDuration(GetNumberOfSecsMinsHoursDays()));
}