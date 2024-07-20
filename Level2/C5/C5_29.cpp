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
int CopyOnlyPrimeNumbers(int ArraySource[100],int ArrayDestination[100],int ArrayLength)
{
    int Counter=0;
    for(int i=0;i<ArrayLength;i++)
    {
        if(CheckPrime(ArraySource[i])==enPrimeNotPrime::Prime)
        {
            ArrayDestination[Counter]=ArraySource[i];
            Counter++;
        }
    }
    return Counter;
}
void PrintRandomElementsOfArrayAndOnlyPrimeNumbersCopiedArray(int ArrayLength)
{
    int Array1[100];
    int Array2[100];
    int Array2Length;
    ReadArrayRandomNumbers(Array1,ArrayLength);
    cout<<"Array 1 Elements: ";
    PrintArrayELements(Array1,ArrayLength);
    Array2Length=CopyOnlyPrimeNumbers(Array1,Array2,ArrayLength);
    cout<<"Prime Numbers In Array2: ";
    PrintArrayELements(Array2,Array2Length);
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    PrintRandomElementsOfArrayAndOnlyPrimeNumbersCopiedArray(ReadPostiveNumber("Enter the Number Of elements"));
    
    return 0;
}