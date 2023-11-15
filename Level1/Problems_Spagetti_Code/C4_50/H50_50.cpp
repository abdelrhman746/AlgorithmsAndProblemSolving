#include <iostream>
using namespace std;

void ATMPin3Times()
{
	int fc =0;
	int Pin = 0;
	while (fc!=3)
	{
		cout << "Please enter your Pin code" << endl;
		cin >> Pin;
		if (Pin == 12345)
		{
			cout << "Your Balance is " << 7500 << endl;
			return;
		}
		else
		{
			cout << "Wrong Pin " ;
			fc++;
		}
	}
	cout << "Card Locked" << endl;
}
int main()
{
	ATMPin3Times();
}

