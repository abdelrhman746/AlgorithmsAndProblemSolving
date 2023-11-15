#include <iostream>
using namespace std;

void PrintFrom1toN()
{
	int i, N;
	int Factorial = 1;
	cout << "Please enter the Number !" << endl;
	cin >> N;
	cout << endl;
	for (i = 1; i <= N; i++)
	{		
		Factorial *= i;
	}
	cout << Factorial << endl;
}
int main()
{
	PrintFrom1toN();
}

