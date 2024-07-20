#include <iostream>
using namespace std;
struct stNumbers
{
    int Num1;
    int Num2;
};

stNumbers ReadNumber()
{
    stNumbers Numbers;
    cout << "Please enter  number 1!" << endl;
    cin >> Numbers.Num1;
    cout << "Please enter  number 2!" << endl;
    cin >> Numbers.Num2;

    return Numbers;
}

void Swap2Numbers(stNumbers &Numbers)
{
    int Temp;
    Temp = Numbers.Num1;
    Numbers.Num1 = Numbers.Num2;
    Numbers.Num2 = Temp;

}

void PrintResults(stNumbers Numbers)
{
   
    cout << "Before Swap " << endl <<Numbers.Num1 <<"\t" <<Numbers.Num2<< endl;

    Swap2Numbers(Numbers);
    
    cout << "After Swap " << endl << Numbers.Num1 << "\t" << Numbers.Num2 << endl;
    
}

int main()
{
    PrintResults(ReadNumber());
}