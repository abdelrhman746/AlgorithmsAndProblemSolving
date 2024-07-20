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
int GetMaxNumberInArray(int Array[100],int ArrayLength)
{
    int MaxNumber=0;
    for(int i=0;i<ArrayLength;i++)
    {
        if(MaxNumber<Array[i])
        {
            MaxNumber=Array[i];
        }
    }
    return MaxNumber;
}
void PrintRandomElementsOfArrayAndMaxNumber(int ArrayLength)
{
    int MaxNumber;
    
    int Array[100];
    
    ReadArrayRandomNumbers(Array,ArrayLength);
    
    PrintArrayELements(Array,ArrayLength);

    MaxNumber=GetMaxNumberInArray(Array,ArrayLength);

    cout<<"Max Number is: "<<MaxNumber<<endl;
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    PrintRandomElementsOfArrayAndMaxNumber(ReadPostiveNumber("Enter the Number Of elements"));
    
    return 0;
}