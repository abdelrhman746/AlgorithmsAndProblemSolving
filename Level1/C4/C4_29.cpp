#include <iostream>
#include <cmath>
using namespace std;

struct stNumbers
{
    int Num;
};

stNumbers ReadNumber()
{
    stNumbers Numbers;

    cout << "Please enter Number!" << endl;
    cin >> Numbers.Num;

    return Numbers;
};


int CalculateSumOfEvenNumbers(stNumbers Numbers)
{
    int Sum = 0;
    for (int i = 2; i <= Numbers.Num; i = i + 2)
    {
        Sum += i;
    }
    return Sum;
}

void PrintSum(int Sum)
{
    cout << "The Sum is =" << Sum << endl;
}

int main()
{
    PrintSum(CalculateSumOfEvenNumbers(ReadNumber()));
}