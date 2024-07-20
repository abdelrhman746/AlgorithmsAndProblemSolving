#include <iostream>
#include <cmath>
using namespace std;
struct stNumbers
{
    int Diameter;
    float Pi = 3.14;
};

stNumbers ReadDiameter()
{
    stNumbers Numbers;
    cout << "Please enter  Radius!" << endl;
    cin >> Numbers.Diameter;

    return Numbers;
}

float CircleArea(stNumbers Numbers)
{
    return (Numbers.Pi * pow(Numbers.Diameter, 2))/4;

}

void PrintResults(float Area)
{
    cout << "The Area of the Circle is " << Area << endl;
}

int main()
{
    PrintResults(CircleArea(ReadDiameter()));
}