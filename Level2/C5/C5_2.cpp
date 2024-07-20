#include <iostream>
#include <cmath>
using namespace std;
enum enPrimeNotPrime{Prime,NotPrime};

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
enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);

    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;

}
void PrintPrimeNumbersFrom1ToN(int Number)
{
    cout<<"Prime Number From 1 To "<<Number<<" are :"<<endl;
    for(int i=1;i<=Number;i++)
    {
        if(CheckPrime(i)==enPrimeNotPrime::Prime)
        {
            cout<<i<<" ";
        }
        else
        {
            continue;
        }
    }
    cout<<endl;
}
int main ()
{
    PrintPrimeNumbersFrom1ToN(ReadPostiveNumber("Please enter a Postive Number !"));
    return 0;
}