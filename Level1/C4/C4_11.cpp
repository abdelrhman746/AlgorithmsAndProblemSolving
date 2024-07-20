#include <iostream>
using namespace std;
enum enPassFail{Pass=1,Fail=2};

struct stNumbers
{
    int Num1;
    int Num2;
    int Num3;
};

stNumbers ReadNumber()
{
    stNumbers Numbers;
    cout << "Please enter  number 1!" << endl;
    cin >> Numbers.Num1;
    cout << "Please enter  number 2!" << endl;
    cin >> Numbers.Num2;
    cout << "Please enter  number 3!" << endl;
    cin >> Numbers.Num3;

    return Numbers;
}

int SumOf3Numbers(stNumbers Numbers)
{
    return Numbers.Num1 + Numbers.Num2 + Numbers.Num3;
}

int CalculateAverage(stNumbers Numbers)
{
    return SumOf3Numbers(Numbers)/3;
}

enPassFail CheckPass(stNumbers Numbers)
{
    
    if (CalculateAverage(Numbers) >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResults(stNumbers Numbers)
{
    if (CheckPass(Numbers) == enPassFail::Pass)
    {
        cout << "Pass !" << endl;
    }
    else
    {
        cout << "Fail !" << endl;
    }
   
}

int main()
{
    PrintResults(ReadNumber());
}