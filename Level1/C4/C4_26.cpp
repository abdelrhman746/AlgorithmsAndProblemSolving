#include <iostream>
#include <cmath>
using namespace std;

struct stNumbers
{
    int Num;
};

stNumbers ReadNumber()
{
    stNumbers Numbers;

    cout << "Please enter Number!" << endl;
    cin >> Numbers.Num;

    return Numbers;
}

void PrintNumbers(stNumbers Numbers)
{
    for (int i = 1; i <= Numbers.Num; i++)
    {
        cout << i << "\t";
    }
}

int main()
{
    PrintNumbers(ReadNumber());
}