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

void ReadArrayRandomNumbers(int Array[100],int ArrayLength)
{
    for(int i=0;i<ArrayLength;i++)
    {
        Array[i]=RandomNumber(1,100);
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
void PrintArrayELements(int Array[100],int ArrayLength)
{
   
    for(int i=0;i<ArrayLength;i++)
    {
        cout<<Array[i]<<" ";
    }
    cout<<endl;
}
void PrintArrayAndCheckForInputNumber(int ArrayLength)
{
    int Array1[100];
    int Element,Index=-1;
    cout<<"Array 1 Elements:"<<endl;
    ReadArrayRandomNumbers(Array1,ArrayLength);
    PrintArrayELements(Array1,ArrayLength);
    Element=ReadPostiveNumber("Please enter a number to search for");
    cout<<"The Number You are looking for is: "<<Element<<endl;
    if(CheckNumberInArray(Array1,ArrayLength,Element)==enFoundNotFound::Found)
    {
        cout<<"Yes, The number is found :-)"<<Index<<endl;
    }
    else
    {
        cout<<"No, The Number is not found :-( "<<endl;
    }
    
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    
    PrintArrayAndCheckForInputNumber(ReadPostiveNumber("Please Number Of Array elements"));

    return 0;
}