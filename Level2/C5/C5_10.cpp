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

void DigitsOfNumber(int Number)
{
    int Temp=0;
    int Temp1=0;
    while(Number!=0)
    {
        Temp=Temp*10+(Number%10);
        Number/=10;
        
    }
    while(Temp!=0)
    {
        Temp1=Temp%10;
        Temp/=10;
        cout<<Temp1<<endl;
    }
}

void PrintNumberInOrder(int Number)
{
    DigitsOfNumber(Number);     
}
int main ()
{
    PrintNumberInOrder(ReadPostiveNumber("Please enter a Postive Number !"));
    return 0;
}