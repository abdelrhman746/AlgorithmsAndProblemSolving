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
void PrintIsPerfectNumber(int Number)
{
    if(CheckPerfectNumber(Number)==enPerfectNumber::PerfectNumber)
    {
        cout<<Number<<" is Perfect Number"<<endl;
    }
    else
    {
         cout<<Number<<" is not Perfect Number"<<endl;
    }
}

int main ()
{
    PrintIsPerfectNumber(ReadPostiveNumber("Please enter a Postive Number !"));
    return 0;
}