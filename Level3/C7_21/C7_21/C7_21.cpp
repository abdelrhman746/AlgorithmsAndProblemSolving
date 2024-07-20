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
    int Prev1, Prev2,temp;
    Prev1 = 1;
    Prev2 = 1;
    cout << Prev1 << " " << Prev2 << " ";
    for (int i =3; i <=Number; i++)
    {
        temp = Prev1 + Prev2;
        cout << temp << " ";
        Prev1 = Prev2;
        Prev2 = temp;
    }
}
int main()
{
    PrintFabonacciSeries(10);
    
    return 0;
}
