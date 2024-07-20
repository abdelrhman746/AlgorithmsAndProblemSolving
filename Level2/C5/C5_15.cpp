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
void PrintLetterPattern(int Number)
{
    cout<<endl;
    for(int i=65;i<Number+65;i++)
    {
        for(int j=65;j<=i;j++)
        {
            cout<<char(i);
        }
        cout<<endl;
    }
}
int main ()
{
    PrintLetterPattern(ReadPostiveNumber("Please enter a Postive Number !"));
    return 0;
}