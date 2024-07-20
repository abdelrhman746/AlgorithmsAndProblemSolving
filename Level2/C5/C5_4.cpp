#include <iostream>
#include <cmath>
using namespace std;
enum enPerfectNumber{PerfectNumber,NotPerfectNumber};

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
enPerfectNumber CheckPerfectNumber(int Number)
{
    int Sum=0;
    for (int i = 1; i < Number; i++)
    {
       if(!(Number%i))
       {
            Sum+=i;
       }
    }
    if(Sum==Number)
    {
        return enPerfectNumber::PerfectNumber;
    }
    return enPerfectNumber::NotPerfectNumber;
}
void PrintPerfectNumbersFrom1ToN(int Number)
{
    for(int i=1;i<=Number;i++)
    {
        if(CheckPerfectNumber(i)==enPerfectNumber::PerfectNumber)
        {
            cout<<i<<" is Perfect Number"<<endl;
        }
    }
}
int main ()
{
    PrintPerfectNumbersFrom1ToN(ReadPostiveNumber("Please enter a Postive Number !"));
    return 0;
}