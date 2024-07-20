#include <iostream>
#include <cmath>
using namespace std;

struct stNumbers
{
    int Num;
    int pwr2;
    int pwr3;
    int pwr4;
};

stNumbers ReadNumber(void)
{
    stNumbers Numbers;

    cout << "Please enter a Number" << endl;
    cin >> Numbers.Num;
    
    return Numbers;
};

stNumbers PowerOf234(stNumbers Numbers)
{
    Numbers.pwr2 = Numbers.Num * Numbers.Num;
    Numbers.pwr3 = Numbers.Num * Numbers.Num * Numbers.Num;
    Numbers.pwr4 = Numbers.Num * Numbers.Num * Numbers.Num * Numbers.Num;

    return Numbers;
}

void PrintPowerResult(stNumbers Numbers)
{
    cout << "The power of 2 is " << Numbers.pwr2 << endl;
    cout << "The power of 3 is " << Numbers.pwr3 << endl;
    cout << "The power of 4 is " << Numbers.pwr4 << endl;
}

int main()
{
    PrintPowerResult(PowerOf234(ReadNumber()));
}