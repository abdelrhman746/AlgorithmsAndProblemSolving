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
void PrintInvertedNumberPattern(int Number)
{
    cout<<endl;
    for(int i=Number;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
int main ()
{
    PrintInvertedNumberPattern(ReadPostiveNumber("Please enter a Postive Number !"));
    return 0;
}