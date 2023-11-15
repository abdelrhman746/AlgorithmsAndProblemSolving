#include <iostream>
#include <string>
using namespace std;

void PrintNameProcedure()
{
    string Name;
    cout << "Please enter yout Name!" << endl;
    getline(cin, Name);
    cout << Name << endl;
}
int main()
{
    PrintNameProcedure();
}
