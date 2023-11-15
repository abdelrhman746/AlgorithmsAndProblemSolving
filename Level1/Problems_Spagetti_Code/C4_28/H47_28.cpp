#include <iostream>
using namespace std;

void PrintFrom1toN()
{
	int i, N;
	int sum = 0;
	cout << "Please enter the Number !" << endl;
	cin >> N;
	cout << endl;
	for (i = 1; i <= N; i+=2)
	{
		cout << i << endl;
		sum += i;
	}
	cout << sum << endl;
}
int main()
{
	PrintFrom1toN();
}

