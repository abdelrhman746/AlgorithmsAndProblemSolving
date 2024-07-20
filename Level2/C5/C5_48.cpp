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
int Myfloor(float Number)
{
    if(Number>0)
    {
        return Number;
    }
    else
    {
        return --Number;
    }
    

}
void PrintMyfloor(float Number)
{
    cout<<"My floor is :"<<Myfloor(Number)<<endl;
    cout<<"C++ floor is:"<<floor(Number)<<endl;
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    PrintMyRound(ReadNumber("Enter A Number"));
    
    return 0;
}