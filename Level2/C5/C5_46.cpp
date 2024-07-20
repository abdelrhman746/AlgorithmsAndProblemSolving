#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int ReadNumber(string Message)
{
    int Number;
    cout <<Message<<endl;
    cin >> Number;

    return Number;
   
}
int MyAbsolute(int Number)
{
   if(Number>0)
   {
        return Number;
   }
   else
   {
        return Number*-1;
   }
}
void PrintMyAbs(int Number)
{
    cout<<"My Abs is : "<<MyAbsolute(Number)<<endl;
    cout<<"C++ Abs is:"<<abs(Number)<<endl;
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    PrintMyAbs(ReadNumber("Enter A Number"));
    
    return 0;
}