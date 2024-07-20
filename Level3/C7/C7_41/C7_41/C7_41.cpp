#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

enum enWhatToCount { SmallLetters, CapitalLetters, All };
enum enWhatToTrim { enTrimLeft, enTrimRight, enTrimAll };

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
        S1.erase(0, pos + delim.length());
    }
    if (S1 != "")
    {
        counter++;
    }
    return counter;
}
vector<string> SplitString(string S1, string Delim)
{
    vector <string> vString;
    int pos = 0;
    string sWord;
    while (((pos = S1.find(Delim)) != std::string::npos))
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Delim.length());
    }
    if (S1 != "")
    {
        vString.push_back(S1);
    }
    return vString;
}

void PrintSplitString(vector<string>vString)
{
    for (string& s : vString)
    {
        cout << s << endl;
    }
}

string TrimLeft(string S1)
{
    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ')
        {
            return S1.substr(i, S1.length() - i);
        }
    }
    return "";
}
string TrimRight(string S1)
{
    for (int i = S1.length() - 1; i >= 0; i--)
    {
        if (S1[i] != ' ')
        {
            return S1.substr(0, i + 1);
        }
    }
    return "";
}
string TrimDelim(string S1, enWhatToTrim WhatToTrim)
{
    if (WhatToTrim == enWhatToTrim::enTrimAll)
    {
        return TrimRight(TrimLeft(S1));
    }
    else if (WhatToTrim == enWhatToTrim::enTrimLeft)
    {
        return TrimLeft(S1);
    }
    else if (WhatToTrim == enWhatToTrim::enTrimRight)
    {
        return TrimRight(S1);

    }
    return "";
}
string ReadString(string WordsUser)
{
    string Words;
    cout << WordsUser;
    getline(cin, Words);
    return Words;
}
string JoinString(vector<string> vString = { "" }, string Delim = "")
{
    string S1 = "";
    for (string& s : vString)
    {
        S1 = S1 + s + Delim;
    }
    return S1.substr(0, S1.length() - Delim.length());
}
string JoinString(string Array[100], int ArrayLength, string Delim)
{
    string S1 = "";
    for (int i = 0; i < ArrayLength; i++)
    {
        S1 = S1 + Array[i] + Delim;
    }
    return S1.substr(0, S1.length() - Delim.length());
}
string ReverseString(string S1,string Delim)
{
    vector <string>vString,Temp;
    string s="";
    vString = SplitString(S1, Delim);
    vector<string>::iterator iter = vString.end();
    while (iter!=vString.begin())
    {
        iter--;
        s =*iter ;
        Temp.push_back(s) ;
    }
    return JoinString(Temp, Delim);
}
int main()
{
    string S1;
    S1 = ReadString("Please Enter Your String\n");
    cout << "\n\nString after reversing words: " << endl;
    cout << ReverseString(S1," ") << endl;
    

    return 0;
}
