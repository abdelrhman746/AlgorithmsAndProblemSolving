#include <iostream>
using namespace std;
//Validate Age Between 18 and 45
void ValidateAge()
{
	int Password;
	cout << "Please enter your Password !" << endl;
	cin >> Password;

	if (Password == 123456)
	{
		cout << "Valid" << endl;
	}
	else
	{
		cout << "InValid" << endl;
	}
}
int main()
{
	ValidateAge();
}

