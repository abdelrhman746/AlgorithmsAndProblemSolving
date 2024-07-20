#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

enum enMatrixEquality { NotEqual, Equal };

int ReadPostiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);

    return Number;

}

void PrintFirstLetterOfEachWord(string Words)
{
    bool IsFirstLetter = true;
    for (int i = 0; i < Words.length(); i++)
    {
        if (Words[i] !=' ' && IsFirstLetter)
        {
            cout << Words[i] << endl;
        }
        IsFirstLetter = (Words[i] == ' ' ? true : false);
    }
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
    PrintFirstLetterOfEachWord( ReadString("Please Enter Your String ?"));


    return 0;
}
