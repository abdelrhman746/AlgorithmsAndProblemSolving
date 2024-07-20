#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
enum enFoundNotFound{Found,NotFound};
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
void CopyArray(int ArraySource[100],int ArrayDestination[100],int ArrayLength)
{
    for(int i=0;i<ArrayLength;i++)
    {
        ArrayDestination[i]=ArraySource[i];
    }
}
int SearchForElementInArray(int Array[100],int ArrayLength,int Element)
{
    int Counter=-1;
    for(int i=0;i<ArrayLength;i++)
    {
        if(Element==Array[i])
        {
            Counter=i;
        }
    }
    return Counter;
}
enFoundNotFound CheckNumberInArray(int Array[100],int ArrayLength,int Element)
{
    if(SearchForElementInArray(Array, ArrayLength, Element)!=-1)
    {
        return enFoundNotFound::Found;
    }
    else
    {
        return enFoundNotFound::NotFound;
    }
}
void CopyDistnictNumbers(int ArraySource[100],int ArrayDestination[100],int ArrayLength,int &ArrayLength2)
{
    int element=0;
    for(int i=0;i<ArrayLength;i++)
    {
        if(CheckNumberInArray(ArrayDestination,ArrayLength2,ArraySource[i])==enFoundNotFound::NotFound)
        {
            AddArrayElement(ArraySource[i],ArrayDestination,ArrayLength2);
        }
    }
}
void PrintHardCodedElementsOfArrayAndCopiedArrayWithDistnictNumbers(void)
{
    int Array1[100]={10,10,10,50,50,70,70,70,70,90};
    int ArrayLength=10;
    int Array2[100];
    int ArrayLength2=0;

    cout<<"Array 1 Elements: ";
    PrintArrayELements(Array1,ArrayLength);
    CopyDistnictNumbers(Array1,Array2,ArrayLength,ArrayLength2);
    cout<<"Array 2 Prime Numbers: ";
    PrintArrayELements(Array2,ArrayLength2);
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    PrintHardCodedElementsOfArrayAndCopiedArrayWithDistnictNumbers();
    
    return 0;
}