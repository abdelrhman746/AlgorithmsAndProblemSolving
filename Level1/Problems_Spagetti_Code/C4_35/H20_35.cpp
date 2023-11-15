#include <iostream>
using namespace std;
// comission percentage
int main()
{
    double sales;
    double P;
    cout << "Please enter your sales" << endl;
    cin >> sales;
    if (sales >= 1000000)
    {
        P = 0.01;
    }
    else if (sales >= 500000)
    {
        P = 0.02 ;
    }
    else if (sales >= 100000)
    {
        P = 0.03;
    }
    else if (sales >= 50000)
    {
        P = 0.05;
    }
    else
    {
        P = 0.0;
    }
    double Total_commissions = P * sales;
    cout << "Total commissions is " << Total_commissions << endl ;
}
