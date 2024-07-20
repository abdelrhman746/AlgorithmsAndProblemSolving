#include <iostream>
#include <cmath>
using namespace std;

struct stInfo
{
    int Age;
};

stInfo ReadAge()
{
    stInfo Info;

    cout << "Please enter the Age!" << endl;
    cin >> Info.Age;

    return Info;
}

bool ValidateAgeNumberInRange(stInfo Info, int LowerRange, int HigherRange)
{
    return (Info.Age >= LowerRange && Info.Age <= HigherRange);

}

void PrintResults(bool Result)
{
    if (Result == true)
    {
        cout << "Valid " << endl;
    }
    else
    {
        cout << "InValid " << endl;  
       
    }

}

int main()
{
    bool Result;
    
    do 
    {
        Result = ValidateAgeNumberInRange(ReadAge(),18,45);
        PrintResults(Result);
    }while (Result == false);

    

}