#include <iostream>
#include <cmath>
using namespace std;
// Circle Area Inscribed in isosceles triangle

void CircleAreaProcedure()
{
	short side, base, radius, Pi, Area;
	cout << "Please enter the side of the triangle!" << endl;
	cin >> side;
	cout << "Please enter the base of the triangle!" << endl;
	cin >> base;
	radius = ((base / 2) * (sqrt((2 * side) - base) / (2 * side) + base));
	Pi = 3.14;
	Area = floor(Pi * pow(radius, 2));
	cout << "The Area of the circle is : " << Area << endl;
}
int main()
{
	CircleAreaProcedure();
}
