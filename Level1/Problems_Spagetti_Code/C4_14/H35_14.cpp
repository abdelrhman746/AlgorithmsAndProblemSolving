#include <iostream>
#include <string>
using namespace std;

void SwapPerocedure()
{
    int Num1, Num2, temp;
    cout << "Please enter Number1!" << endl;
    cin >> Num1;

    cout << "Please enter Number2!" << endl;
    cin >> Num2;
    
    cout << "Number1 = " << Num1 << endl;

    cout << "Number2 = " << Num2 << endl << endl;

    temp = Num1;
    Num1 = Num2;
    Num2 = temp;

    cout << "Number1 = " << Num1 << endl;

    cout << "Number2 = " << Num2 << endl;
}

int main()
{
    SwapPerocedure();
}
