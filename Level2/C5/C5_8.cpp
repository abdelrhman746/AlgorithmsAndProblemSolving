#include <iostream>
#include <cmath>
using namespace std;
struct stNumbers
{
    int Number;
    int Digit;
};
stNumbers ReadPostiveNumbers(void)
{
    stNumbers Numbers;
    do
    {
        cout <<"Please enter Number"<<endl;
        cin >> Numbers.Number;
    } while (Numbers.Number <= 0);

    do
    {
        cout <<"Please enter The Digit"<<endl;
        cin >> Numbers.Digit;
    } while (Numbers.Number <= 0);

    return Numbers;
}
int DigitFrequency(stNumbers Numbers)
{
    int Temp=0;
    int Frequency=0;
    while(Numbers.Number!=0)
    {
        Temp=Numbers.Number%10;
        Numbers.Number/=10;
        if(Temp==Numbers.Digit)
        {
            Frequency++;
        }
    }
    return Frequency;
}
void PrintFrequemcyOfDigitInNumber(stNumbers Numbers)
{
    cout<<"The Frequency of "<<Numbers.Digit<<" is : ";
    cout<<DigitFrequency(Numbers);     
}
int main ()
{
    PrintFrequemcyOfDigitInNumber(ReadPostiveNumbers());
    return 0;
}