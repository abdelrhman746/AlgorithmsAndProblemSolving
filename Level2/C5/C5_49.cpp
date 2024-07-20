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
int MyCeil(float Number)
{
    if(Number>0)
    {
        return ++Number;
    }
    else
    {
        return Number;
    }
}
void PrintMyRound(float Number)
{
    cout<<"My Ceil is :"<<MyCeil(Number)<<endl;
    cout<<"C++ Ceil is:"<<ceil(Number)<<endl;
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    PrintMyRound(ReadNumber("Enter A Number"));
    
    return 0;
}