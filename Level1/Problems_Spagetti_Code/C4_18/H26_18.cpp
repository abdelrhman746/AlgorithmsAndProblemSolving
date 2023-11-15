#include <iostream>
#include <cmath>
using namespace std;
// Circle Area
int main()
{

	short radius, Pi, Area;
	cout << "Please enter the radius of the circle!" << endl;
	cin >> radius;
	Pi = 3.14;
	Area = ceil(Pi*pow(radius,2));
	cout << "The Area of the circle is : " << Area << endl;
}
