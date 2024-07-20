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

float ReadPostiveNumber(string Message)
{
    float Num;
    do
    {
        cout << Message << endl;
        cin >> Num;
    } while (Num <= 0);

    return Num;
}

float GetTotalSeconds(void)
{
    float TotalSeconds;
    TotalSeconds = ReadPostiveNumber("Please enter Total number of Seconds");
   
    return TotalSeconds;
}

stNumbers CalculateDaysHrsMinsSecs(float TotalSeconds)
{
    stNumbers Numbers;
    int remainder;
    int SecPerDay = 24 * 60 * 60;
    int SecPerHrs = 60 * 60;
    int SecPerMins = 60;

    Numbers.NumberOfDays = floor(TotalSeconds / SecPerDay);
    remainder = (int)TotalSeconds % SecPerDay;

    Numbers.NumberOfHours = floor(remainder / SecPerHrs);
    remainder = remainder % SecPerHrs;

    Numbers.NumberOfMins = floor(remainder / SecPerMins);
    remainder = remainder % SecPerMins;

    Numbers.NumberOfSecs = remainder;
   
    return Numbers;
}

void PrintDaysHrsMinsSecs(stNumbers Numbers)
{
    cout << Numbers.NumberOfDays << " : " << Numbers.NumberOfHours << " : " << Numbers.NumberOfMins << " : " << Numbers.NumberOfSecs << endl;
}

int main()
{
    PrintDaysHrsMinsSecs(CalculateDaysHrsMinsSecs(GetTotalSeconds()));
}