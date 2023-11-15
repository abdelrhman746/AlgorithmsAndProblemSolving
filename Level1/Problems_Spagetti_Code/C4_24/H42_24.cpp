#include <iostream>
using namespace std;
//Validate Age Between 18 and 45
void ValidateAge()
{
	short Age;
	cout << "Please enter your Age !" << endl;
	cin >> Age;

	if (Age >= 18&&Age<=45)
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

