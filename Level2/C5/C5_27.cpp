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
float GetSumOFArray(int Array[100],int ArrayLength)
{
    int Sum;
    for(int i=0;i<ArrayLength;i++)
    {
        Sum+=Array[i];
    }
    return Sum;
}
float CalculateAverage(int ArrayLength,float Sum)
{
    return float(Sum/ArrayLength);
}
void PrintRandomElementsOfArrayAndAverage(int ArrayLength)
{
    float Sum;
    float AverageOfArray;
    int Array[100];
    
    ReadArrayRandomNumbers(Array,ArrayLength);
    
    PrintArrayELements(Array,ArrayLength);

    Sum=GetSumOFArray(Array,ArrayLength);
    AverageOfArray=CalculateAverage(ArrayLength,Sum);
    cout<<"Average Of all numbers is: "<<AverageOfArray<<endl;
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    PrintRandomElementsOfArrayAndAverage(ReadPostiveNumber("Enter the Number Of elements"));
    
    return 0;
}