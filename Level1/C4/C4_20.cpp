#include <iostream>
#include <cmath>
using namespace std;
struct stNumbers
{
    int Side;
    float Pi = 3.14;
};

stNumbers ReadSideoftheSquare()
{
    stNumbers Numbers;
    cout << "Please enter  Inscribed Square Side!" << endl;
    cin >> Numbers.Side;

    return Numbers;
}

float CircleAreaInscribedInSquare(stNumbers Numbers)
{
    return (Numbers.Pi * pow(Numbers.Side, 2)) / 4;

}

void PrintResults(float Area)
{
    cout << "The Area of the Circle is " << Area << endl;
}

int main()
{
    PrintResults(CircleAreaInscribedInSquare(ReadSideoftheSquare()));
}