#include <iostream>
#include <cmath>
using namespace std;

//struct stNumbers
//{
//    int Sum;    
//};
//
int ReadOperation(int i)
{
    int Num;
    cout << "Please enter Number " << i << endl;
    cin >> Num;

    return Num;
};

int SumUntil99(void)
{
    int Sum=0,Num,i=1;
    do
    {
        Num=ReadOperation(i);
        if (Num == -99)
        {
            break;
        }
        Sum= Sum +Num;
        i++;
    } while (Num != -99);
    return Sum;
}

void PrintTheSumoOfTheNumbers(int Sum)
{
    cout << "Sum = " << Sum << endl;
}

int main()
{
    PrintTotalCommission(SumUntil99());
}