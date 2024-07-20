#include <iostream>
using namespace std;
enum enGreaterSmaller { Greater = 1, Smaller = 2 };

struct stNumbers
{
    int Num1;
    int Num2;
};

stNumbers ReadNumber()
{
    stNumbers Numbers;
    cout << "Please enter  number 1!" << endl;
    cin >> Numbers.Num1;
    cout << "Please enter  number 2!" << endl;
    cin >> Numbers.Num2;

    return Numbers;
}

enGreaterSmaller MaxOf2Numbers(stNumbers Numbers)
{

    if (Numbers.Num1 > Numbers.Num2)
        return enGreaterSmaller::Greater;
    else
        return enGreaterSmaller::Smaller;
}

void PrintResults(stNumbers Numbers)
{
    if (MaxOf2Numbers(Numbers) == enGreaterSmaller::Greater)
    {
        cout << Numbers.Num1 << endl;
    }
    else
    {
        cout << Numbers.Num2 << endl;
    }

}

int main()
{
    PrintResults(ReadNumber());
}