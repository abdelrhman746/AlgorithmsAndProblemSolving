#include <iostream>
#include <cmath>
using namespace std;

struct stNumbers
{
    int Num;
    int pwr;
    int Result=1;
};

stNumbers ReadNumber(void)
{
    stNumbers Numbers;

    cout << "Please enter a Number" << endl;
    cin >> Numbers.Num;
    cout << "Please enter the power " << endl;
    cin >> Numbers.pwr;

    return Numbers;
};

stNumbers PowerOfM(stNumbers Numbers)
{
    if (Numbers.pwr == 0)
    {
        Numbers.Result = 1;
        return Numbers;
    }
    else
    {
        for (int i = 1; i <= Numbers.pwr; i++)
        {
            Numbers.Result = Numbers.Result * Numbers.Num;
        }
        return Numbers;
    }
    
}

void PrintPowerResult(stNumbers Numbers)
{
    cout << "The power of " <<Numbers.pwr << " is " << Numbers.Result << endl;
}

int main()
{
    PrintPowerResult(PowerOfM(ReadNumber()));
}