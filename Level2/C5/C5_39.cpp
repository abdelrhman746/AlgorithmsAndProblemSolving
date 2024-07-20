#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
enum enPrimeNotPrime{Prime,NotPrime};
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
enPrimeNotPrime CheckPrime(int Num)
{
    int M = round(Num / 2);

    for (int i = 2; i <= M; i++)
    {
        if (Num % i == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;

}
void CopyPrimeNumbers(int ArraySource[100],int ArrayDestination[100],int ArrayLength,int &ArrayLength2)
{
    for(int i=0;i<ArrayLength;i++)
    {
        if(CheckPrime(ArraySource[i])==enPrimeNotPrime::Prime)
        {
            AddArrayElement(ArraySource[i],ArrayDestination,ArrayLength2);
        }
    }
}
void PrintRandomElementsOfArrayAndCopiedArrayWithOnlyPrimeNumbers(int ArrayLength)
{
    int Array1[100];
    int Array2[100];
    int ArrayLength2=0;
    ReadArrayRandomNumbers(Array1,ArrayLength);
    cout<<"Array 1 Elements: ";
    PrintArrayELements(Array1,ArrayLength);
    CopyPrimeNumbers(Array1,Array2,ArrayLength,ArrayLength2);
    cout<<"Array 2 Prime Numbers: ";
    PrintArrayELements(Array2,ArrayLength2);
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    PrintRandomElementsOfArrayAndCopiedArrayWithOnlyPrimeNumbers(ReadPostiveNumber("Enter the Number Of elements"));
    
    return 0;
}