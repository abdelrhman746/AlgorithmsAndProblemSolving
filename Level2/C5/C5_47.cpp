#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

float ReadNumber(string Message)
{
    float Number;
    cout <<Message<<endl;
    cin >> Number;

    return Number;
   
}
float GetFractionPart(float Number)
{
    return Number-int(Number);
}
int MyRound(float Number)
{
    int IntPart;
    IntPart=Number;
    if(abs(GetFractionPart(Number))>=0.5)
    {
        if(Number>0)
        {
            return ++IntPart;
        }
        else
        {
            return --IntPart;
        }
        
    }
    else
    {
        return int(Number);
    }

}
void PrintMyRound(float Number)
{
    cout<<"My Round is :"<<MyRound(Number)<<endl;
    cout<<"C++ Round is:"<<round(Number)<<endl;
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    PrintMyRound(ReadNumber("Enter A Number"));
    
    return 0;
}