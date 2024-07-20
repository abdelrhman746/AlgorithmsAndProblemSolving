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

string ReadString(string WordsUser)
{
    string Words;
    cout << WordsUser;
    getline(cin, Words);
    return Words;
}

int main()
{
    string S1=ReadString("Please Enter Your String ?");
    cout << "String after Upper: " << endl;
    cout << ConvertAllLettersToUpperCase(S1) << endl;
    cout << "String after Lower: " << endl;
    cout << ConvertAllLettersToLowerCase(S1) << endl;


    return 0;
}
