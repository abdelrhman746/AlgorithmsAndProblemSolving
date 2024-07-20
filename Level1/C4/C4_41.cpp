#include <iostream>
#include <cmath>
using namespace std;

struct stNumbers
{
    float NumberOfHours;
    float NumberOfDays;
    float NumberOfWeeks;
};

stNumbers ReadPostiveNumberOFHours(void)
{
    stNumbers Numbers;
    do
    {
        cout << "Please enter Postive Number Of Hours" << endl;
        cin >> Numbers.NumberOfHours;
    } while (Numbers.NumberOfHours <= 0);
    
    return Numbers;
}

stNumbers CalculateNumbersOFWeeksAndDays(stNumbers Numbers)
{
    Numbers.NumberOfDays = Numbers.NumberOfHours /24;
    Numbers.NumberOfWeeks = Numbers.NumberOfDays / 7;
    return Numbers;
}

void PrintNumberOfWeeksAndDays(stNumbers Numbers)
{
    cout << "Number of Days = " << Numbers.NumberOfDays << endl;
    cout << "Number of Weeks = " << Numbers.NumberOfWeeks << endl;
}

int main()
{
    PrintNumberOfWeeksAndDays(CalculateNumbersOFWeeksAndDays(ReadPostiveNumberOFHours()));
}