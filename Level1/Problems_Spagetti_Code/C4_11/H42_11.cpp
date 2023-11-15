#include <iostream>
using namespace std;

void AvgPassOrFail()
{
	short  M1,M2,M3;
	short Avg;
	cout << "Please enter your Mark1 !" << endl;
	cin >> M1;

	cout << "Please enter your Mark2 !" << endl;
	cin >> M2;

	cout << "Please enter your Mark3 !" << endl;
	cin >> M3;

	Avg = (M1 + M2 + M3) / 3;

	if (Avg >= 50)
	{
		cout << "Paseed" << endl;
	}
	else
	{
		cout << "Failed" << endl;
	}
}
int main()
{
	AvgPassOrFail();
}

