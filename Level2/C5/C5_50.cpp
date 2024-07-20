#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int ReadPostiveNumber(string Message)
{
    int Number;
    cout <<Message<<endl;
    cin >> Number;

    return Number;
   
}
int MySqrt(int Number)
{
    return pow(Number,0.5);
}
void PrintMySqrt(int Number)
{
    cout<<"My Square Root is :"<<MySqrt(Number)<<endl;
    cout<<"C++ Square Root is:"<<MySqrt(Number)<<endl;
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    PrintMyRound(ReadPostiveNumber("Enter A Number"));
    
    return 0;
}