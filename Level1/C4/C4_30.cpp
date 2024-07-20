#include <iostream>
#include <cmath>
using namespace std;

struct stNumbers
{
    int Num;
};

stNumbers ReadPositiveNumber(string Message)
{
    stNumbers Numbers;

    do
    {
        cout << Message << endl;
        cin >> Numbers.Num;
    } while (Numbers.Num < 0);
    

    return Numbers;
};

int CalculateFactorial(stNumbers Numbers)
{
    int Factorial = 1;
    for (int i = 1; i <= Numbers.Num; i++)
    {
        Factorial *= i;
    }
    return Factorial;
}

void PrintSum(int Factorial)
{
    cout << "The Factorial is =" << Factorial << endl;
}

int main()
{
    PrintSum(CalculateFactorial(ReadPositiveNumber("Please enter a Postive Number")));
}