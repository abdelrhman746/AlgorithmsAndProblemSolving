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
string GenerateWord(enCharType CharType, short Length)
{
    string Word="";
    for(int i=1;i<=Length;i++)
    {
        Word+=GetRandomCharacter(CharType);
    }
    return Word;
}
string GenerateKey(int Length)
{
    string Key="";
    for(int i=1;i<=Length;i++)
    {
        Key+=GenerateWord(enCharType::CapitalLetter,4);   
        if(i!=Length)
        {
           Key+="-";
        }       
    }
    return Key;
}
void ReadGeneratedKeysInArray(string Array[100],int ArrayLength)
{
    string Key;
    for(int i=0;i<ArrayLength;i++)
    {
        Key=GenerateKey(4);
        Array[i]=Key;
    }
}
void PrintArrayWithGenetratedKeys(string Array[100],int ArrayLength)
{
   
    for(int i=0;i<ArrayLength;i++)
    {
        cout<<"Array["<<i<<"] :"<<Array[i]<<endl;
    }
    cout<<endl;
}
void PrintArrayWithGeneratedKeys(int ArrayLength)
{
    string Array1[100];

    ReadGeneratedKeysInArray(Array1,ArrayLength);
    PrintArrayWithGenetratedKeys(Array1,ArrayLength);

}
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    
    PrintArrayWithGeneratedKeys(ReadPostiveNumber("Please Number Of Keys to be generated"));

    return 0;
}