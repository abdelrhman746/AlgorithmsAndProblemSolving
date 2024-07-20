#include <iostream>
#include <cmath>
using namespace std;
struct stNumbers
{
    int Side;
    int Base;
    float Pi = 3.14;
};

stNumbers ReadSideAndBase()
{
    stNumbers Numbers;
    cout << "Please enter the Side  of the triangel!" << endl;
    cin >> Numbers.Side;
    cout << "Please enter the Base  of the triangel!" << endl;
    cin >> Numbers.Base;

    return Numbers;
}

float CircleAreaInscribedInIsoscelesTriangle(stNumbers Numbers)
{
    float Radius;
    Radius = ((Numbers.Base / 2) * (sqrt((2 * Numbers.Side) - Numbers.Base) / (2 * Numbers.Side) + Numbers.Base));
    return  floor(Numbers.Pi * pow(Radius, 2));
}

void PrintResults(float Area)
{
    cout << "The Area of the Circle is " << Area << endl;
}

int main()
{
    PrintResults(CircleAreaInscribedInIsoscelesTriangle(ReadSideAndBase()));
}