#include <iostream>
#include <cmath>
using namespace std;

struct stNumbers
{
    float BillValue;
    float TotalBill;
};

stNumbers ReadBillValue(void)
{
    stNumbers Numbers;
    cout << "Please enter your Bill Value" << endl;
    cin >> Numbers.BillValue;
    
    return Numbers;
}

float CalculateTotalBillWithServiceAndTaxes(stNumbers Numbers)
{
    Numbers.TotalBill= Numbers.BillValue*1.1;
    return Numbers.TotalBill * 1.16;
}

void PrintTotalB(float TotalBill)
{
    cout << "Total Bill is  = " << TotalBill << endl;
}

int main()
{
    PrintTotalB(CalculateTotalBillWithServiceAndTaxes(ReadBillValue()));
}