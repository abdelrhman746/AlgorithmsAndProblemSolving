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
   
    for(int i=0;i<ArrayLength;i++)
    {
        cout<<Array[i]<<" ";
    }
    cout<<endl;
}
void Sum2Arrays(int Array1[100],int Array2[100],int ArrayLength,int ArraySum[100])
{
   for(int i=0;i<ArrayLength;i++)
    {
        ArraySum[i]=Array1[i]+Array2[i];
    }
}
void PrintRandomElementsOf2ArraysAndGetSumArray(int ArrayLength)
{
    int Array1[100];
    int Array2[100];
    int ArraySum[100];

    ReadArrayRandomNumbers(Array1,ArrayLength);
    cout<<"Array 1 Elements: ";
    PrintArrayELements(Array1,ArrayLength);
    ReadArrayRandomNumbers(Array2,ArrayLength);
    cout<<"Array 2 Elements: ";
    PrintArrayELements(Array2,ArrayLength);
    Sum2Arrays(Array1,Array2,ArrayLength,ArraySum);
    cout<<"Sum of The 2 Arrays: ";
    PrintArrayELements(ArraySum,ArrayLength);
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    PrintRandomElementsOf2ArraysAndGetSumArray(ReadPostiveNumber("Enter the Number Of elements"));
    
    return 0;
}