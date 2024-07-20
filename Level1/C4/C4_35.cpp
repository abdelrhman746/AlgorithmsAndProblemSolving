#include <iostream>
#include <cmath>
using namespace std;

struct stPiggyBankContent
{
    int P;
    int N;
    int Di;
    int Q;
    int Do;
    float TotalPennis;
    float TotalDollars;
};

stPiggyBankContent ReadNumber(void)
{
    stPiggyBankContent PiggyBankContent;

    cout << "Please enter your Pennis!" << endl;
    cin >> PiggyBankContent.P;

    cout << "Please enter your Nickels!" << endl;
    cin >> PiggyBankContent.N;

    cout << "Please enter your Dimes!" << endl;
    cin >> PiggyBankContent.Di;

    cout << "Please enter your Quarters!" << endl;
    cin >> PiggyBankContent.Q;

    cout << "Please enter your Dollars !" << endl;
    cin >> PiggyBankContent.Do;


    return PiggyBankContent;
};

stPiggyBankContent PiggyBankCalculator(stPiggyBankContent PiggyBankContent)
{
    
    PiggyBankContent.TotalPennis = PiggyBankContent.P * 1 + PiggyBankContent.N * 5 + PiggyBankContent.Di * 10 + PiggyBankContent.Q * 25 + PiggyBankContent.Do * 100;
    
    PiggyBankContent.TotalDollars = PiggyBankContent.TotalPennis / 100;

    return PiggyBankContent;
}

void PrintPiggyBankCalculationResults(stPiggyBankContent PiggyBankContent)
{
    cout << "Total Dollars is  " << PiggyBankContent.TotalDollars << endl;
    cout << "Total Pennis is  " << PiggyBankContent.TotalPennis << endl;
}

int main()
{
    PrintPiggyBankCalculationResults(PiggyBankCalculator(ReadNumber()));
}