#include <iostream>
#include <cmath>
using namespace std;
// Circle Area described around an Arbitrary triangle
int main()
{
	short A, B, C, P, T, Pi, Area;
	cout << "Please enter side A of the triangle!" << endl;
	cin >> A;
	cout << "Please enter side B of the triangle!" << endl;
	cin >> B;
	cout << "Please enter side C of the triangle!" << endl;
	cin >> C;

	P = (A + B + C) / 2;
	T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
	Pi = 3.14;
	Area =round( Pi * pow(T, 2));
	cout << "The Area of the circle is : " << Area << endl;
}
