#include <iostream>
using namespace std;

void PrintFrom1toN()
{
	int i, N;
	cout << "Please enter the Number !" << endl;
	cin >> N;
	cout << endl;
	for (i = N; i > 0; i--)
	{
		cout << i << endl;
	}
}
int main()
{
	PrintFrom1toN();
}

