#include <iostream>
#include <cmath>
using namespace std;
// Circle Area through diameter

void CircleAreaProcedure()
{
	short diameter, Pi, Area;
	cout << "Please enter the diameter of the circle!" << endl;
	cin >> diameter;
	Pi = 3.14;
	Area = ceil((Pi * pow(diameter, 2)) / 4);
	cout << "The Area of the circle is : " << Area << endl;

}
int main()
{
	CircleAreaProcedure();
}
