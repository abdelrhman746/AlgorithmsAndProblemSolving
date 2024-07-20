#include <iostream>
#include <cmath>
using namespace std;

struct stLoanInfo
{
    int LoanAmount;
    int MonthlyInstallment;
};
int ReadPostiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (!(Number >= 0));

    return Number;
}

stLoanInfo GetLoanInfo(void)
{
    stLoanInfo LoanInfo;
    LoanInfo.LoanAmount= ReadPostiveNumber("Please enter your  Loan Amount ");
    LoanInfo.MonthlyInstallment = ReadPostiveNumber("Please enter your  Monthly Installment ");
    
    return LoanInfo;
}


int CalculateNumberOfMonths(stLoanInfo LoanInfo)
{
    return LoanInfo.LoanAmount / LoanInfo.MonthlyInstallment;
}

void PrintNumberOfMonths(int NumberOfMonths)
{
    cout << NumberOfMonths << " Months" << endl;
}

int main()
{
    PrintNumberOfMonths(CalculateNumberOfMonths(GetLoanInfo()));
}