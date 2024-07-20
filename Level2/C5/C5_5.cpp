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

void ReverseNumber(int Number)
{
    int Temp=0;
    while(Number!=0)
    {
        Temp=Number%10;
        Number/=10;
        cout<<Temp<<endl;
    }
}

void PrintNumberInReversedOrder(int Number)
{
    ReverseNumber(Number);     
}
int main ()
{
    PrintNumberInReversedOrder(ReadPostiveNumber("Please enter a Postive Number !"));
    return 0;
}