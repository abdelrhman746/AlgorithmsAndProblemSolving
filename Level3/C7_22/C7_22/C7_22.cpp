#include <iostream>
#include <iomanip>
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
void PrintFabonacciSeries(int Number)
{
    int Prev1, Prev2, temp;
    Prev1 = 1;
    Prev2 = 1;
    cout << Prev1 << " " << Prev2 << " ";
    for (int i = 3; i <= Number; i++)
    {
        temp = Prev1 + Prev2;
        cout << temp << " ";
        Prev1 = Prev2;
        Prev2 = temp;
    }
}
void PrintFabonacciSeriesRecursion(int Number,int prev1,int prev2)
{
    Number--;
    int temp;
    cout << prev1 << "  ";
    if (Number > 0)
    {
        temp = prev1 + prev2;
        prev1 = prev2;
        prev2 = temp;
        PrintFabonacciSeriesRecursion(Number, prev1, prev2);
    }
    else
    {
        return;
    }
}
int main()
{
    PrintFabonacciSeriesRecursion(10,1,1);

    return 0;
}
