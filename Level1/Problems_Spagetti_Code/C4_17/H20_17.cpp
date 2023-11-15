#include <iostream>
using namespace std;
// Triangle Area
int main()
{
    short base, height;
    cout << "Please enter the base of the triangle" << endl;
    cin >> base;
    cout << "Please enter the height of the triangle" << endl;
    cin >> height;
    short Area = (base * height) / 2;

    cout << "The Area of the triangle is :" << Area << endl;
}
