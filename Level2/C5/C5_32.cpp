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
void CopyArrayReversed(int ArraySource[100],int ArrayDestination[100],int ArrayLength)
{
    int Counter=ArrayLength-1;
    for(int i=0;i<ArrayLength;i++)
    {
        ArrayDestination[Counter]=ArraySource[i];
        Counter--;
    }
}
void PrintRandomElementsOfArrayAndCopiedArrayReversed(int ArrayLength)
{
    int Array1[100];
    int Array2[100];
    
    ReadArrayRandomNumbers(Array1,ArrayLength);
    cout<<"Array  Elements: ";
    PrintArrayELements(Array1,ArrayLength);
    CopyArrayReversed(Array1,Array2,ArrayLength);
    cout<<"Array reversed Elements: ";
    PrintArrayELements(Array2,ArrayLength);

   
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    PrintRandomElementsOfArrayAndCopiedArrayReversed(ReadPostiveNumber("Enter the Number Of elements"));
    
    return 0;
}