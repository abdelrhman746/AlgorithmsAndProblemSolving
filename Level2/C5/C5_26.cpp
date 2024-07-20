#include <iostream>
#include <cmath>
#include <cstdlib>
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
int RandomNumber(int From, int To)
{
    //Function to generate a random number

    int randNum=rand()%(To-From+1)+From;

    return randNum;
}
void ReadArrayRandomNumbers(int Array[100],int ArrayLength)
{
    for(int i=0;i<ArrayLength;i++)
    {
        Array[i]=RandomNumber(1,100);
    }
}
void PrintArrayELements(int Array[100],int ArrayLength)
{
    cout<<"Array Elements: ";
    for(int i=0;i<ArrayLength;i++)
    {
        cout<<Array[i]<<" ";
    }
    cout<<endl;
}
int GetSumOFArray(int Array[100],int ArrayLength)
{
    int Sum;
    for(int i=0;i<ArrayLength;i++)
    {
        Sum+=Array[i];
    }
    return Sum;
}
void PrintRandomElementsOfArrayAndSum(int ArrayLength)
{
    int Sum;
    
    int Array[100];
    
    ReadArrayRandomNumbers(Array,ArrayLength);
    
    PrintArrayELements(Array,ArrayLength);

    Sum=GetSumOFArray(Array,ArrayLength);

    cout<<"Sum Of All Numbers is: "<<Sum<<endl;
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    PrintRandomElementsOfArrayAndSum(ReadPostiveNumber("Enter the Number Of elements"));
    
    return 0;
}