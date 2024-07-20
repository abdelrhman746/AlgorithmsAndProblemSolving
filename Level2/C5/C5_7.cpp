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

int ReverseNumber(int Number)
{
    int Temp=0;
    while(Number!=0)
    {
        Temp=Temp*10+(Number%10);
        Number/=10;
    }
    return Temp;
}

void PrintNumberInReversedOrder(int Number)
{
    cout<<"Reverse Number is :"<<endl;   
    cout<<ReverseNumber(Number);   
}
int main ()
{
    PrintNumberInReversedOrder(ReadPostiveNumber("Please enter a Postive Number !"));
    return 0;
}