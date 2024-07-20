#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
enum enCharType{SmallLetter,CapitalLetter,SpeacialCharacter,Digit};
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
char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SmallLetter :
        return char(RandomNumber(97,122));
        break; 
    case enCharType::CapitalLetter :
        return char(RandomNumber(65,90));
        break;
    case enCharType::SpeacialCharacter :
    return char(RandomNumber(33,47));
    break;
    case enCharType::Digit :
    return char(RandomNumber(48,57));
    break;
    }
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
void PrintArrayELements(int Array[100],int ArrayLength)
{
   
    for(int i=0;i<ArrayLength;i++)
    {
        cout<<Array[i]<<" ";
    }
    cout<<endl;
}
void PrintArrayAndSearchForInputNumber(int ArrayLength)
{
    int Array1[100];
    int Element,Index=-1;
    cout<<"Array 1 Elements:"<<endl;
    ReadArrayRandomNumbers(Array1,ArrayLength);
    PrintArrayELements(Array1,ArrayLength);
    Element=ReadPostiveNumber("Please enter a number to search for");
    Index=SearchForElementInArray(Array1,ArrayLength,Element);
    if(Index!=-1)
    {
        cout<<"The Number You are looking for is: "<<Element<<endl;
        cout<<"The Number Found at position: "<<Index<<endl;
        cout<<"The Number Found its order: "<<Index+1<<endl;
    }
    else
    {
        cout<<"The Number You are looking for is: "<<Element<<endl;
        cout<<"The Number is not found :-( "<<endl;
    }
    

}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    
    PrintArrayAndSearchForInputNumber(ReadPostiveNumber("Please Number Of Array elements"));

    return 0;
}