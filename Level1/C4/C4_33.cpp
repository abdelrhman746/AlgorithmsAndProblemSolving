#include <iostream>
#include <cmath>
using namespace std;
enum enGradeResult{A,B,C,D,E,F};
struct stNumbers
{
    int Grade;
    int Result;
};

stNumbers ReadNumberInRange(int From,int To)
{
    stNumbers Numbers;
    do
    {
        cout << "Please enter your grade!" << endl;
        cin >> Numbers.Grade;
    } while (Numbers.Grade < From || Numbers.Grade > To);
        
    return Numbers;
};

enGradeResult GradeCheck(stNumbers Numbers)
{
    enGradeResult GradeResult;
    if (Numbers.Grade >= 90 && Numbers.Grade <= 100)
    {
        return enGradeResult::A;
    }
    else if (Numbers.Grade >= 80 && Numbers.Grade < 90)
    {
        return enGradeResult::B;
    }
    else if (Numbers.Grade >= 70 && Numbers.Grade < 80)
    {
        return enGradeResult::C;
    }
    else if (Numbers.Grade >= 60 && Numbers.Grade < 70)
    {
        return enGradeResult::D;
    }
    else if (Numbers.Grade >= 50 && Numbers.Grade < 60)
    {
        return enGradeResult::D;
    }
    else if (Numbers.Grade >= 0 && Numbers.Grade < 50)
    {
        return enGradeResult::F;
    }
}

void PrintGradeResult(enGradeResult GradeResult)
{
    if (GradeResult==enGradeResult::A)
    {
        cout << "A" << endl;
    }
    else if (GradeResult == enGradeResult::B)
    {
        cout << "B" << endl;
    }
    else if (GradeResult == enGradeResult::C)
    {
        cout << "C" << endl;
    }
    else if (GradeResult == enGradeResult::D)
    {
        cout << "D" << endl;
    }
    else if (GradeResult == enGradeResult::E)
    {
        cout << "E" << endl;
    }
    else if (GradeResult == enGradeResult::F)
    {
        cout << "F" << endl;
    }
}

int main()
{
    PrintGradeResult(GradeCheck(ReadNumberInRange(0,100)));
}