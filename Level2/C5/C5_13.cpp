#include <iostream>
#include <cmath>
using namespace std;

int ReadPostiveNumber(string Message)
{
    int Number;
    do
    {
        cout <<Message<<endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
void PrintNumberPattern(int Number)
{
    cout<<endl;
    for(int i=1;i<=Number;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
int main ()
{
    PrintNumberPattern(ReadPostiveNumber("Please enter a Postive Number !"));
    return 0;
}