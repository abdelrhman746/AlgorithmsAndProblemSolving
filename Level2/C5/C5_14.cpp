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
void PrintInvertedLetterPattern(int Number)
{
    cout<<endl;
    for(int i=65+Number-1;i>=65;i--)
    {
        for(int j=i;j>=65;j--)
        {
            cout<<char(i);
        }
        cout<<endl;
    }
}
int main ()
{
    PrintInvertedLetterPattern(ReadPostiveNumber("Please enter a Postive Number !"));
    return 0;
}