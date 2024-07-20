#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
enum enPalindrome{Palindrome,NotPalindrome};
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
enPalindrome CheckArrayIsPalindrome(int Array1[100],int ArrayLength )
{
    for(int i=0;i<ArrayLength;i++)
    {
       if(Array1[i]!=Array1[ArrayLength-i-1])
       {
            return enPalindrome::NotPalindrome;
       }
    }
    return enPalindrome::Palindrome;
}
void PrintArrayAndCheckArrayPalindrome()
{
    int Array1[100]={10,20,30,40,30,20,10};
    int ArrayLength=7;
    cout<<"Array  Elements: ";
    PrintArrayELements(Array1,ArrayLength);
    if(CheckArrayIsPalindrome(Array1,ArrayLength)==enPalindrome::Palindrome)
    {
        cout<<"Yes, Array is Palindrome"<<endl;
    }
    else
    {
        cout<<"No, Array is not Palindrome"<<endl;
    }
}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    PrintArrayAndCheckArrayPalindrome();
    
    return 0;
}