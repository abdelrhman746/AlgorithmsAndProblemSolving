#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

enum enWhatToCount { SmallLetters, CapitalLetters, All };

string ConvertAllLettersToLowerCase(string Words)
{
    for (int i = 0; i < Words.length(); i++)
    {
        Words[i] = tolower(Words[i]);
    }
    return Words;
}

string ConvertAllLettersToUpperCase(string Words)
{
    for (int i = 0; i < Words.length(); i++)
    {
        Words[i] = toupper(Words[i]);
    }
    return Words;
}
char InvertCharacterCase(char A)
{
    return (isupper(A) ? tolower(A) : toupper(A));
}
string InvertStringCase(string S1)
{
    int stringlength = S1.length();
    for (int i = 0; i < stringlength; i++)
    {
        if (isupper(S1[i]))
        {
            S1[i] = tolower(S1[i]);
        }
        else
        {
            S1[i] = toupper(S1[i]);
        }
    }
    return S1;
}
int GetSmallLetterCountInString(string S1)
{
    int counter = 0;
    for (int i = 0; i < S1.length(); i++)
    {
        if (islower(S1[i]))
        {
            counter++;
        }
    }
    return counter;
}
int GetCapitalLetterCountInString(string S1)
{
    int counter = 0;
    for (int i = 0; i < S1.length(); i++)
    {
        if (isupper(S1[i]))
        {
            counter++;
        }
    }
    return counter;
}
int CountLetters(string S1, enWhatToCount WhatToCount)
{

    if (WhatToCount == enWhatToCount::CapitalLetters)
        return GetCapitalLetterCountInString(S1);
    else if (WhatToCount == enWhatToCount::SmallLetters)
        return GetSmallLetterCountInString(S1);
    else if (WhatToCount == enWhatToCount::All)
        return S1.length();
}
int CountCharInString(string S1, char A, bool MatchCase = true)
{
    int counter = 0;
    for (int i = 0; i < S1.length(); i++)
    {
        if (MatchCase)
        {
            if (S1[i] == A)
                counter++;
        }
        else
        {
            if (tolower(S1[i]) == tolower(A))
                counter++;
        }


    }
    return counter;
}
bool IsVowel(char A)
{
    if (tolower(A) == 'a' || tolower(A) == 'e' || tolower(A) == 'i' || tolower(A) == 'o' || tolower(A) == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int CountVowelsInString(string S1)
{
    int counter = 0;
    for (int i = 0; i < S1.length(); i++)
    {
        if (IsVowel(S1[i]))
            counter++;
    }
    return counter;
}
void PrintAllVowelsInString(string S1)
{
    cout << "\nVowels in String are : ";
    for (int i = 0; i < S1.length(); i++)
    {
        if (IsVowel(S1[i]))
            cout << S1[i] << "  ";
    }
    cout << endl;
}
char ReadChar(string WordsUser)
{
    char A;
    cout << WordsUser;
    cin >> A;
    return A;
}
void PrintStringWords(string S1)
{
    string delim = " ";//delimiter

    cout << "\nYour string Words are : \n\n";

    short pos = 0;

    string sWord;

    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            cout << sWord << endl;
        }
        S1.erase(0, pos + delim.length());
    }

    if (S1 != "")
    {
        cout << S1 << endl;
    }
}
int CountStringWords(string S1)
{
    int counter = 0;
    string sWord = "";
    string delim = " ";
    int pos;
    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            counter++;
        }
        S1.erase(0,pos + delim.length());
    }
    if (S1 != "")
    {
        counter++;
    }
    return counter;
}
string ReadString(string WordsUser)
{
    string Words;
    cout << WordsUser;
    getline(cin, Words);
    return Words;
}

int main()
{
    string S1 = ReadString("Please Enter Your String?\n");
    cout << "the Number of words in your string is : " << CountStringWords(S1) << endl;





    return 0;
}
