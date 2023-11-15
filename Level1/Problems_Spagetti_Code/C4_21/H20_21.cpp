#include <iostream>
using namespace std;
// Circle Area along the circumference
int main()
{
    short circumferance, Pi = 3.14;
    cout << "Please enter the circumferance of the square" << endl;
    cin >> circumferance;
    short Area = ( circumferance * circumferance) / (4*Pi);

    cout << "The Area of the circle is :" << Area << endl;
}
