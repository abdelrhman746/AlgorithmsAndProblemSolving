#include <iostream>
using namespace std;

struct stMarks
{
    int Mark1;
    int Mark2;
    int Mark3;
};

stMarks ReadNumber()
{
    stMarks Marks;
    cout << "Please enter  number 1!" << endl;
    cin >> Marks.Mark1;
    cout << "Please enter  number 2!" << endl;
    cin >> Marks.Mark2;
    cout << "Please enter  number 3!" << endl;
    cin >> Marks.Mark3;

    return Marks;
}

int SumOf3Numbers(stMarks Marks)
{
    return Marks.Mark1 + Marks.Mark2 + Marks.Mark3;
}

float CalculateAverage(stMarks Marks)
{
    return (float)SumOf3Numbers(Marks) / 3;
}
void PrintNumber(stMarks Marks)
{
    cout << "The Average is " << CalculateAverage(Marks) << endl;
}

int main()
{
    PrintNumber(ReadNumber());
}