#include <iostream>
#include <string>
using namespace std;

void SwapPerocedure(int& Num1, int& Num2)
{
    int temp;
    temp = Num1;
    Num1 = Num2;
    Num2 = temp;

}

int main()
{
    int Num1, Num2, temp;
    cout << "Please enter Number1!" << endl;
    cin >> Num1;

    cout << "Please enter Number2!" << endl;
    cin >> Num2;

    cout << "Number1 Before Swap = " << Num1 << endl;

    cout << "Number2 Before Swap = " << Num2 << endl << endl;
   
    SwapPerocedure(Num1,Num2);

    cout << "Number1 Before Swap = " << Num1 << endl;

    cout << "Number2 Before Swap = " << Num2 << endl << endl;

}
