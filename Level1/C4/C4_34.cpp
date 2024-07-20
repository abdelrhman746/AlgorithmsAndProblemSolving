#include <iostream>
#include <cmath>
using namespace std;

struct stNumbers
{
    float Sales;
    float Percentage;
};

stNumbers ReadNumber(void)
{
    stNumbers Numbers;

    cout << "Please enter your Sales!" << endl;
    cin >> Numbers.Sales;

    return Numbers;
};

stNumbers CommissionPercentageCalculation(stNumbers Numbers)
{
    
    if (Numbers.Sales >= 1000000)
    {
        Numbers.Percentage = 0.01;
    }
    else if (Numbers.Sales >= 500000)
    {
        Numbers.Percentage = 0.02;
    }
    else if (Numbers.Sales >=100000)
    {
        Numbers.Percentage = 0.03;
    }
    else if (Numbers.Sales >= 50000)
    {
        Numbers.Percentage = 0.05;
    }
    else
    {
        Numbers.Percentage = 0;
    }
    return Numbers;
}

float ComissionCalculation(stNumbers Numbers)
{
    return (Numbers.Sales * Numbers.Percentage);
}

void PrintTotalCommission(float Commission)
{
    cout << "The commission is " << Commission << endl;
}

int main()
{
    PrintTotalCommission(ComissionCalculation(CommissionPercentageCalculation(ReadNumber())));
}