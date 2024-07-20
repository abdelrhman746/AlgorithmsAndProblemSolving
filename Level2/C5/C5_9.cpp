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
void PrintAllDigitFrequency(stNumbers Numbers)
{
    for(int i=0;i<10;i++)
    {
        Numbers.Digit=i;
        
        if(DigitFrequency(Numbers)>0)
        {
            cout<<"The Frequency of "<<Numbers.Digit<<" is : ";
            cout<<DigitFrequency(Numbers);
            cout<<" Time(s)"<<endl;  
        }           
        
    }
    
}
int main ()
{
    PrintAllDigitFrequency(ReadPostiveNumbers());
    return 0;
}