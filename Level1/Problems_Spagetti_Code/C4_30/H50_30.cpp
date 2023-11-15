#include <iostream>
using namespace std;

void PrintFrom1toN()
{
	int i = 1;
	int N;
	int Factorial = 1;
	cout << "Please enter the Number !" << endl;
	cin >> N;
	while (N < 0)
	{
		cout << "Wrong the number must be positive, ";
		cout << "Please enter the Number !" << endl;
		cin >> N;
	}
	cout << endl;

	while (i <= N)
	{
		Factorial *= i;
		i++;
	}
	cout << Factorial << endl;
}
int main()
{
	PrintFrom1toN();
}