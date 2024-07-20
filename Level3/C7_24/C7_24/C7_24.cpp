#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

enum enMatrixEquality { NotEqual, Equal };


string ConvertFirstLetterOfEachWordToUpperCase(string Words)
{
    cout << "String After Coversion:" << endl;
    string s;
    bool IsFirstLetter = true;
    for (int i = 0; i < Words.length(); i++)
    {
        if (Words[i] != ' ' && IsFirstLetter)
        {
            Words[i]=toupper(Words[i]);
            
        }
        IsFirstLetter = (Words[i] == ' ' ? true : false);
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
    cout << ConvertFirstLetterOfEachWordToUpperCase(ReadString("Please Enter Your String ?")) << endl;


    return 0;
}
