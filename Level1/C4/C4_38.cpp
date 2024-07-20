#include <iostream>
#include <cmath>
using namespace std;
enum enPrimeNotPrime{Prime,NotPrime};
struct stNumbers
{
    int Num;    
};

stNumbers ReadPostiveNumber(void)
{
    stNumbers Numbers;
    do
    {
        cout << "Please enter a Postive Number";
        cin >> Numbers.Num;
    } while (Numbers.Num <= 0);

    return Numbers;
   
}

enPrimeNotPrime CheckPrime(stNumbers Numbers)
{
    int M = round(Numbers.Num / 2);

    for (int i = 2; i <= M; i++)
    {
        if (Numbers.Num % i == 0)
            return enPrimeNotPrime::NotPrime;
    }
    return enPrimeNotPrime::Prime;

}

void PrintNumberType(stNumbers Numbers)
{
    switch (CheckPrime(Numbers))
    {
    case enPrimeNotPrime::Prime:
        cout << "The number is Prime\n";
        break;
    case enPrimeNotPrime::NotPrime:
        cout << "The number is Not Prime\n";
        break;
    }
    
}

int main()
{
    PrintNumberType(ReadPostiveNumber());
}