#include <iostream>
using namespace std;
struct stName
{
    string FirstName;
    string LastName;
    
};

stName ReadName()
{
    stName Name;
    cout << "Please enter the first name!" << endl;
    cin >> Name.FirstName;

    cout << "Please enter the last name!" << endl;
    cin >> Name.LastName;

    return Name;
}

string GetFULLName(stName Name,bool Reversed)
{
    string FullName = "";
    if (Reversed)
    {
        FullName = Name.LastName + " " + Name.FirstName;
    }
    else
    {
        FullName = Name.FirstName + " " + Name.LastName;
    }
    return FullName;
}

void PrintName(string FullName)
{
    cout << "Full Name = " << FullName << endl;
}

int main()
{
    PrintName(GetFULLName(ReadName(),false));
}