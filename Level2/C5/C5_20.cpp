#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
enum enCharType{SmallLetter,CapitalLetter,SpeacialCharacter,Digit};
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
int main ()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    
    cout<<GetRandomCharacter(enCharType::SmallLetter)<<endl;
    cout<<GetRandomCharacter(enCharType::CapitalLetter)<<endl;
    cout<<GetRandomCharacter(enCharType::SpeacialCharacter)<<endl;
    cout<<GetRandomCharacter(enCharType::Digit)<<endl;
    return 0;
}