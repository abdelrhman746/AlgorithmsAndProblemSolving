#include <iostream>
#include <cmath>
using namespace std;

int ReadPostiveNumber(string Message)
{
    int Number;
    do
    {
        cout <<Message<<endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int SumDigits(int Number)
{
    int Sum=0;
    while(Number!=0)
    {
        Sum+=(Number%10);
        Number/=10;
    }
    return Sum;
}

void PrintSumOfDigitsInNumber(int Number)
{
    cout<<"Sum Of Digits = ";
    cout<<SumDigits(Number);
    cout<<endl;     
}
int main ()
{
    PrintSumOfDigitsInNumber(ReadPostiveNumber("Please enter a Postive Number !"));
    return 0;
}