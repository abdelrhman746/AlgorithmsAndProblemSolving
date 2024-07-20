#include <iostream>
#include <string>
using namespace std;

struct stInfo
{
	int Age;
	bool HasDrivingLicense;
};

stInfo ReadInfo()
{
	stInfo Info;
	cout << "Please enter Driver's Age" << endl;
	cin >> Info.Age;

	cout << "Please enter if the Driver has Driving license" << endl;
	cin >> Info.HasDrivingLicense;

	return Info;
}

bool IsAccepted(stInfo Info)
{
	return(Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info)
{
	if (IsAccepted(Info))
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
	PrintResult(ReadInfo());
	return 0;
}

