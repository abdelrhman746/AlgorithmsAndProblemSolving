#include <iostream>
using namespace std;

void PrintFrom1toN()
{
	int N;
	int sum = 0;
	cout << "Please enter the Number !" << endl;
	cin >> N;
	int i = 0;
	cout << endl;
	while (i <= N)
	{
		cout << i << endl;
		sum += i;
		i += 2;
	}
	cout << sum << endl;
}
int main()
{
	PrintFrom1toN();
}

