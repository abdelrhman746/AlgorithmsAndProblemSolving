#include <iostream>
using namespace std;

enum enGreaterNumber{Number1,Number2,Number3};

struct stNumbers
{
    int Num1;
    int Num2;
    int Num3;
};

stNumbers ReadNumber()
{
    stNumbers Numbers;
    cout << "Please enter  number 1!" << endl;
    cin >> Numbers.Num1;
    cout << "Please enter  number 2!" << endl;
    cin >> Numbers.Num2;
    cout << "Please enter  number 3!" << endl;
    cin >> Numbers.Num3;

    return Numbers;
}

enGreaterNumber MaxOf3Numbers(stNumbers Numbers)
{

    if (Numbers.Num1 > Numbers.Num2)
    {
        if (Numbers.Num1 > Numbers.Num3)
        {
            return enGreaterNumber::Number1;
        }
        else
        {
            return enGreaterNumber::Number3;
        }
    }
    else
    {
        if (Numbers.Num2 > Numbers.Num3)
        {
            return enGreaterNumber::Number2;
        }
        else
        {
            return enGreaterNumber::Number3;
        }
    }
}

void PrintResults(stNumbers Numbers)
{
    if (MaxOf3Numbers(Numbers) == enGreaterNumber::Number1)
    {
        cout << Numbers.Num1 << endl;
    }
    else if(MaxOf3Numbers(Numbers) == enGreaterNumber::Number2)
    {
        cout << Numbers.Num2 << endl;
    }
    else
    {
        cout << Numbers.Num3 << endl;
    }

}

int main()
{
    PrintResults(ReadNumber());
}