#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

enum enMatrixEquality { NotEqual, Equal };


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
    char A = ReadChar("Please Enter a character?");
    cout << "Char after inverting case: " << endl;
    cout<<InvertCharacterCase(A);


    return 0;
}
