#include <iostream>
#include <cmath>
using namespace std;
// Circle Area along the circumferance

void CircleAreaProcedure()
{
	short circumferance, Pi, Area;
	cout << "Please enter the circumferance of the circle!" << endl;
	cin >> circumferance;
	Pi = 3.14;
	Area = floor(pow(circumferance, 2) / (4 * Pi));
	cout << "The Area of the circle is : " << Area << endl;
}
int main()
{
	CircleAreaProcedure();
}
