#include <iostream>
#include <string>
using namespace std;

void PrintName(string Name)
{
	cout << "\n Your Name is: " << Name << endl;
}
string ReadName()
{
	string Name;

	cout << "please enter your name!" << endl;
	getline(cin, Name);

	return Name;
}
int main()
{
	PrintName(ReadName());
	return 0;
}

