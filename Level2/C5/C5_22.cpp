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
void ReadArrayElements(int Array[100],int ArrayLength)
{
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<ArrayLength;i++)
    {
        cout<<"Element["<<i+1<<"]: ";
        Array[i]=ReadPostiveNumber("");
    }
}
void PrintArrayELements(int Array[100],int ArrayLength)
{
    cout<<"Original array: ";
    for(int i=0;i<ArrayLength;i++)
    {
        cout<<Array[i]<<" ";
    }
    cout<<endl;
}
int CheckCountOfElementInArray(int Array[100],int ArrayLength,int Element)
{
    int Counter=0;
    for(int i=0;i<ArrayLength;i++)
    {
        if(Element==Array[i])
        {
            Counter++;
        }
    }
    return Counter;
}
void PrintNumberOfelementsRepeatedInArray(int ArrayLength)
{
    int ElementCount;
    
    int Array[100];
    
    ReadArrayElements(Array,ArrayLength);
    
    int NumberToCheck=ReadPostiveNumber("Enter the number you want to Check:");
    
    ElementCount=CheckCountOfElementInArray(Array,ArrayLength,NumberToCheck);
    
    PrintArrayELements(Array,ArrayLength);
    
    cout<<NumberToCheck<<" is repeated "<<ElementCount<<" time(s)";
}
int main ()
{    
    PrintNumberOfelementsRepeatedInArray(ReadPostiveNumber("Please enter the Number of elements of the array"));

    return 0;
}