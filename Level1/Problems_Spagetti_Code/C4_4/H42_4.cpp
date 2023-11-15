#include <iostream>
using namespace std;

void HireDriver()
{
	int  Age;
	bool HasDriverLicense, result;

	cout << "Please enter the Age of the driver!" << endl;
	cin >> Age;

	cout << "Please enter the if the driver Has Driver License 0/1!" << endl;
	cin >> HasDriverLicense;

	result = (Age > 21 && HasDriverLicense == 1);

	if (result == 1)
	{
		cout << "Hired" << endl;
	}
	else
	{
		cout << "Rejected" << endl;
	}
}
int main()
{
	HireDriver();
}	

