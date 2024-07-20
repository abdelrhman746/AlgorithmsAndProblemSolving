#include <iostream>
using namespace std;

float ReadNumber()
{
    float Num;
    cout << "Please enter a number!" << endl;
    cin >> Num;

    return Num;
}

float CalculateHalfNumber(float Num)
{
    return Num /= 2;
}

void PrintNumber(int Num)
{
    cout << "Half of  " << Num << " is " << CalculateHalfNumber(Num) << endl;
}

int main()
{
    PrintNumber(ReadNumber());
}