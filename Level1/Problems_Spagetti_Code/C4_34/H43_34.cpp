#include <iostream>
using namespace std;

void CommissionPercentage()
{
    int Sales;
    float P;
    cout << "Please enter your Sales!" << endl;
    cin >> Sales;
    if (Sales >= 1000000 )
    {
        P = 0.01;
    }
    else if (Sales >= 500000)
    {
        P = 0.02;
    }
    else if (Sales >= 100000)
    {
        P = 0.03;
    }
    else if (Sales >= 50000)
    {
        P = 0.05;
    }
    else
    {
        P = 0;
    }
    cout << "The total comission is : " << P * Sales << endl;
}

int main()
{
    CommissionPercentage();
}
