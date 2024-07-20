#include <iostream>
using namespace std;
enum enPassFail { Fail = 0, Pass = 1 };
int ReadMark()
{
    int Mark;
    cout << "Please enter your Mark!" << endl;
    cin >> Mark;

    return Mark;
}

enPassFail CheckMark(int Mark)
{
    if (Mark >= 50)
    {
        return enPassFail::Pass;
    }
    else
    {
        return enPassFail::Fail;
    }
}

void PrintNumber(int Mark)
{
    if (CheckMark(Mark)==enPassFail::Pass)
    {
        cout << "Pass!" << endl;
    }
    else
    {
        cout << "Fail!" << endl;
    }
   
}

int main()
{
    PrintNumber(ReadMark());
}