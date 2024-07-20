#include <iostream>
#include <cmath>
using namespace std;

struct stLoanInfo
{
    int LoanAmount;
    int NumberOfMonths;
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
    LoanInfo.LoanAmount = ReadPostiveNumber("Please enter your  Loan Amount ");
    LoanInfo.NumberOfMonths = ReadPostiveNumber("Please enter your Number Of Months ");

    return LoanInfo;
}


int CalculateNumberOfMonths(stLoanInfo LoanInfo)
{
    return LoanInfo.LoanAmount / LoanInfo.NumberOfMonths;
}

void PrintMonthlyInstallments(int MonthlyInstallment)
{
    cout << MonthlyInstallment << " Pounds" << endl;
}

int main()
{
    PrintMonthlyInstallments(CalculateNumberOfMonths(GetLoanInfo()));
}