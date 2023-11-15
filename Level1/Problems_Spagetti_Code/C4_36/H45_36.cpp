#include <iostream>
using namespace std;


void SimpleCalculator()
{
    int Num1, Num2, result;
    char Oper;

    cout << "Please enter the first number!" << endl;
    cin >> Num1;
    cout << "Please enter the Operation!" << endl;
    cin >> Oper;
    cout << "Please enter the second number!" << endl;
    cin >> Num2;

    switch (Oper)
    {
    case '+':
        result = Num1 + Num2;
        cout << "Result = " << Num1 << " " << Oper << " " << Num2 << " = " << result << endl;
        break;
    case '-':
        result = Num1 - Num2;
        cout << "Result = " << Num1 << " " << Oper << " " << Num2 << " = " << result << endl;
        break;
    case '/':
        result = Num1 / Num2;
        cout << "Result = " << Num1 << " " << Oper << " " << Num2 << " = " << result << endl;
        break;
    case '*':
        result = Num1 * Num2;
        cout << "Result = " << Num1 << " " << Oper << " " << Num2 << " = " << result << endl;
        break;
    }
}

int main()
{
    SimpleCalculator();
}
