#include <iostream>
#include <cmath>
using namespace std;

struct stNumbers
{
    float TotalBill;
    float PaidCash;
};

stNumbers ReadTotalBillAndPaidCash(void)
{
    stNumbers Numbers;
    cout << "Please enter your Total Bill" << endl;
    cin >> Numbers.TotalBill;
    cout << "Please enter your Paid Cash" << endl;
    cin >> Numbers.PaidCash;

    return Numbers;
}

float CalculateRemainder(stNumbers Numbers)
{
    return Numbers.PaidCash-Numbers.TotalBill;
}

void PrintRemainder(float Remainder)
{
    cout << "*********************************" << endl;
    cout << "The remainder is  = " << Remainder << endl;
}

int main()
{
    PrintRemainder(CalculateRemainder(ReadTotalBillAndPaidCash()));
}