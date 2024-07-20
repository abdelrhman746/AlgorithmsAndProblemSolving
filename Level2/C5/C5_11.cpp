#include <iostream>
#include <cmath>
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
int ReverseNumber(int Number)
{
    int Temp=0;
    while(Number!=0)
    {
        Temp=Temp*10+(Number%10);
        Number/=10;
    }
    return Temp;
}
enPalindrome Checkpalindrome(int Number)
{
    if(Number==ReverseNumber(Number))
    {
        return enPalindrome::Palindrome;
    }
    else
    {
        return enPalindrome::NotPalindrome;
    }
}
void PrintIsPalindromeNumber(int Number)
{
    
    if(Checkpalindrome(ReverseNumber(Number))==enPalindrome::Palindrome)
    {
        cout<<"Yes, it is a palindrome number."<<endl;
    }
    else
    {
        cout<<"No, it is Not a palindrome number."<<endl;
    }
}
int main ()
{
    PrintIsPalindromeNumber(ReadPostiveNumber("Please enter a Postive Number !"));
    return 0;
}