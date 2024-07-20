#include <iostream>
using namespace std;

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

int SumOf3Numbers(stNumbers Numbers)
{
    return Numbers.Num1+Numbers.Num2+Numbers.Num3;
}

void PrintResults(stNumbers Numbers)
{
    cout << "The sum is " << SumOf3Numbers(Numbers) << endl;
}

int main()
{
    PrintResults(ReadNumber());
}