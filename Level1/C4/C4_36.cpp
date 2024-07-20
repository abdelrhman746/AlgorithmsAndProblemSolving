#include <iostream>
#include <cmath>
using namespace std;

struct stNumbers
{
    float Operand1;
    float Operand2;
    char Operation;
    float Result;
};

stNumbers ReadOperation(void)
{
    stNumbers Numbers;

    cout << "Please enter the 1st operand!" << endl;
    cin >> Numbers.Operand1;

    cout << "Please enter the operation!" << endl;
    cin >> Numbers.Operation;

    cout << "Please enter the 2nd operand!" << endl;
    cin >> Numbers.Operand2;

    return Numbers;
};

stNumbers SimpleCalculator(stNumbers Numbers)
{
    
    switch (Numbers.Operation)
    {
    case '+':
        Numbers.Result= (Numbers.Operand1 + Numbers.Operand2);
        break;
    case '-':
        Numbers.Result = (Numbers.Operand1 - Numbers.Operand2);
        break;
    case '/':
        Numbers.Result = (Numbers.Operand1 / Numbers.Operand2);
        break;
    case '*':
        Numbers.Result = (Numbers.Operand1 * Numbers.Operand2);
        break;
    }
    return Numbers;
}

void PrintSimpleCalculatorResult(stNumbers Numbers)
{
    cout << "Result = " << Numbers.Operand1 << " " << Numbers.Operation << " " << Numbers.Operand2 << " = " << Numbers.Result << endl;
}

int main()
{
    PrintTotalCommission(SimpleCalculator(ReadOperation()));
}