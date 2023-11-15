#include <iostream>
using namespace std;

void PassOrFail()
{
	short  Mark;

	cout << "Please enter your Mark !" << endl;
	cin >> Mark;

	if (Mark >= 50)
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
	PassOrFail();
}

