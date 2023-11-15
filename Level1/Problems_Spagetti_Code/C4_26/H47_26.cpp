#include <iostream>
using namespace std;

void PrintFrom1toN()
{
	int i,N;
	cout << "Please enter the Number !" << endl;
	cin >> N;
	cout << endl;
	for (i = 0; i <= N; i++)
	{
		cout << i << endl;
	}
}
int main()
{
	PrintFrom1toN();
}

