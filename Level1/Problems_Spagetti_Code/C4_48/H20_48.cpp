#include <iostream>
using namespace std;
// Loan Installment Months
int main()
{

    short NumberOfMonths;
    float LoanAmount, MonthlyInst;
    cout << "Please enter your  Loan Amount " << endl;
    cin >> LoanAmount;
    cout << "Please enter your  Number  of months " << endl;
    cin >> NumberOfMonths;
    MonthlyInst = LoanAmount / NumberOfMonths;

    cout << MonthlyInst << " Pounds" << endl;
}
