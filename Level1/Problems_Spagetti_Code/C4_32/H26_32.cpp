#include <iostream>
#include <cmath>
using namespace std;
// Power of M
int main()
{
	short N, P, A;
	cout << "Please enter a Number !" << endl;
	cin >> N;
	cout << "Please enter the power !" << endl;
	cin >> P;
	A = round(pow(N, P));
	cout << A << endl;
}
