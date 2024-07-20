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
void AddArrayElement(int Number,int Array[100],int &ArrayLength)
{
    Array[ArrayLength]=Number;
    ArrayLength++;
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
void CopyArrayWithAddArrayElement(int ArraySource[100],int ArrayDestination[100],int ArrayLength,int &ArrayLength2)
{
    for(int i=0;i<ArrayLength;i++)
    {
        AddArrayElement(ArraySource[i],ArrayDestination,ArrayLength2);
    }
}
void PrintRandomElementsOfArrayAndCopiedArrayWithAddArrayELement(int ArrayLength)
{
    int Array1[100];
    int Array2[100];
    int ArrayLength2=0;
    ReadArrayRandomNumbers(Array1,ArrayLength);
    cout<<"Array 1 Elements: ";
    PrintArrayELements(Array1,ArrayLength);
    CopyArrayWithAddArrayElement(Array1,Array2,ArrayLength,ArrayLength2);
    cout<<"Array 2 Elements: ";
    PrintArrayELements(Array2,ArrayLength2);

   
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    PrintRandomElementsOfArrayAndCopiedArrayWithAddArrayELement(ReadPostiveNumber("Enter the Number Of elements"));
    
    return 0;
}