#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
enum enYesNo{No,Yes};
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
void ReadArrayElementsSemiDynamic(int Array[100],int &ArrayLength)
{
    bool AddMore;
    do
    {
        AddArrayElement(ReadPostiveNumber("Please  enter a number !"),Array,ArrayLength);
        cout<<"Do you want to add more numbers![0]:No[1]:Yes"<<endl;
        cin>>AddMore;
    }while(AddMore==enYesNo::Yes);
}
void PrintArrayELements(int Array[100],int ArrayLength)
{
   
    for(int i=0;i<ArrayLength;i++)
    {
        cout<<Array[i]<<" ";
    }
    cout<<endl;
}
void PrintSemiDynamicArray()
{
    int Array1[100];
    int ArrayLength=0;
    ReadArrayElementsSemiDynamic(Array1,ArrayLength);
    cout<<"Array length: "<<ArrayLength<<endl;
    cout<<"Array Elements: ";
    PrintArrayELements(Array1,ArrayLength);
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    
    PrintSemiDynamicArray();

    return 0;
}