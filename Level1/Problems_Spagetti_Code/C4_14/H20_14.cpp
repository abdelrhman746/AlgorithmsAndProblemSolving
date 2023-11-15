#include <iostream>
using namespace std;
//Swap Numbers
int main()
{
    short Num1, Num2;
    cout << "Please enter the 1st Number" << endl;
    cin >> Num1;
    cout << "Please enter the 2nd Number" << endl;
    cin >> Num2;
    cout << "Before Swap " << Num1 << "\t" << Num2 << endl;
    short temp;
    temp = Num1;
    Num1 = Num2;
    Num2 = temp;
    cout << "After Swap  " << Num1 << "\t" << Num2 << endl;

}

