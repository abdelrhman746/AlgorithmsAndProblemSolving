#include <iostream>
#include <cmath>
using namespace std;
// Power of 2,3,4
int main()
{
	short N, A, B, C;
	cout << "Please enter a Number !" << endl;
	cin >> N;
	A = round(pow(N, 2));
	B = round(pow(N, 3));
	C = round(pow(N, 4));
	cout << A << endl << B << endl << C << endl;
}
