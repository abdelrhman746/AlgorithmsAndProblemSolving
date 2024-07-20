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
char ReadChar(string WordsUser)
{
    char A;
    cout << WordsUser;
    cin >> A;
    return A;
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
    char A = ReadChar("\nPlease Enter a Character?\n");
    
    if (IsVowel(A))
    {
        cout << "Yes Letter '" << A << "' is Vowel" << endl;
    }
    else
    {
        cout << "No Letter '" << A << "' is Not Vowel" << endl;
    }

    return 0;
}
