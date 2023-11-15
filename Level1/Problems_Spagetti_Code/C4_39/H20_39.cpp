#include <iostream>
using namespace std;
// Pay Remainder
int main()
{
    float Total_Bill;
    float Paid_Cash;
    cout << "Please enter your Total Bill" << endl;
    cin >> Total_Bill;
    cout << "Please enter your Paid Cash" << endl;
    cin >> Paid_Cash;
    float Remainder = Paid_Cash - Total_Bill;
    cout << "The Remainder is : " << Remainder << endl;
}
