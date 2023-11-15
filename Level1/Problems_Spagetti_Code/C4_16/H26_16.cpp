#include <iostream>
#include <cmath>
using namespace std;
// Rectangle area through diagonal and sides area
int main()
{
	
	short diagonal, side, Area;
	cout << "Please enter the diagonal of the rectangle!" << endl;
	cin >> diagonal;
	cout << "Please enter the side of the rectangle!" << endl;
	cin >> side;
	Area = side * (sqrt(pow(diagonal,2) - pow(side,2)));
	cout << "The Area of the rectangle is : " << Area << endl; 
}
