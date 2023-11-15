#include <iostream>
#include <cmath>
using namespace std;
// Circle Area inscribed in a square

void CircleAreaProcedure()
{
	short side, Pi, Area;
	cout << "Please enter the side of the square!" << endl;
	cin >> side;
	Pi = 3.14;
	Area = ceil((Pi * pow(side, 2)) / 4);
	cout << "The Area of the circle is : " << Area << endl;
}
int main()
{
	CircleAreaProcedure();
}
