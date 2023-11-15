#include <iostream>
using namespace std;
// Circle Area Inscribed in isosceles triangle
int main()
{
    short side , base, Pi = 3.14;
    cout << "Please enter the side of the Triangle" << endl;
    cin >> side;
    cout << "Please enter the base of the Triangle" << endl;
    cin >> base;
    short Area = ((Pi*base * base)/4)*((2*side-base)/(2*side+base));

    cout << "The Area of the circle is :" << Area << endl;
}
