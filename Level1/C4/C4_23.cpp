#include <iostream>
#include <cmath>
using namespace std;
struct stNumbers
{
    int Side1;
    int Side2;
    int Side3;
    float Pi = 3.14;
};

stNumbers ReadTriangleSides()
{
    stNumbers Numbers;

    cout << "Please enter the Side 1 of the triangel!" << endl;
    cin >> Numbers.Side1;
    cout << "Please enter the Base 2 of the triangel!" << endl;
    cin >> Numbers.Side2;
    cout << "Please enter the Base 3 of the triangel!" << endl;
    cin >> Numbers.Side3;

    return Numbers;
}

float CircleAreaInscribedInArbitaryTriangle(stNumbers Numbers)
{
    float P = (Numbers.Side1 + Numbers.Side2 + Numbers.Side3) / 2;
    float T = (Numbers.Side1 * Numbers.Side2 * Numbers.Side3) / (4 * sqrt(P * (P - Numbers.Side1) * (P - Numbers.Side2) * (P - Numbers.Side3)));
    return  floor(Numbers.Pi * pow(T, 2));
}

void PrintResults(float Area)
{
    cout << "The Area of the Circle is " << Area << endl;
}

int main()
{
    PrintResults(CircleAreaInscribedInArbitaryTriangle(ReadTriangleSides()));
}