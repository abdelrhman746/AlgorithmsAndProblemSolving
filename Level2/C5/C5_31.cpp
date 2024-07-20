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
void FillArrayWith1ToN(int Array[100],int ArrayLength)
{
    for(int i=0;i<ArrayLength;i++)
    {
        Array[i]=i+1;
    }
}
void Swap2Numbers(int &Num1,int &Num2)
{
    int Temp;
    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;

}
void ShuffleArray(int Array[100],int ArrayLength)
{
    for(int i=0;i<ArrayLength;i++)
    {
       Swap2Numbers(Array[RandomNumber(1,ArrayLength)-1],Array[RandomNumber(1,ArrayLength)-1]);
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
void PrintlementsOfArrayAndShuffleArray(int ArrayLength)
{
    int Array1[100];
    int Array2[100];
    int ArraySum[100];

    FillArrayWith1ToN(Array1,ArrayLength);
    cout<<"Array Elements: ";
    PrintArrayELements(Array1,ArrayLength);
    ShuffleArray(Array1,ArrayLength);
    cout<<"Array After Shuffle: ";
    PrintArrayELements(Array1,ArrayLength);
   
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    PrintlementsOfArrayAndShuffleArray(ReadPostiveNumber("Enter the Number Of elements"));
    
    return 0;
}