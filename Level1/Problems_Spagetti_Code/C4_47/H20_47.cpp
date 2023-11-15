#include <iostream>
using namespace std;
// Loan Installment Months
int main()
{
    
    short NumberOfMonths;
    float LoanAmount ,MonthlyInst;
    cout << "Please enter your  Loan Amount " << endl;
    cin >> LoanAmount;
    cout << "Please enter your  Monthly Installment " << endl;
    cin >> MonthlyInst;
    NumberOfMonths = LoanAmount / MonthlyInst;

    cout << NumberOfMonths << " Months"<< endl;
}
