#include <iostream>
using namespace std;
// service and taxes calculation
int main()
{
    float Bill;
    float P=1.26;
    cout << "Please enter your  Bill" << endl;
    cin >> Bill;
    float Total_Bill = Bill * P;
    cout << "The Total Bill is : " << Total_Bill << endl;
}
