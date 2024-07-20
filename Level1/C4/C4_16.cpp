#include <iostream>
#include <cmath>
using namespace std;
struct stNumbers
{
    int Diagonal;
    int side;
};

stNumbers ReadDiagonalAndSide()
{
    stNumbers Numbers;
    cout << "Please enter  Diagonal!" << endl;
    cin >> Numbers.Diagonal;
    cout << "Please enter  side!" << endl;
    cin >> Numbers.side;
    
    return Numbers;
}

float AreaOfRectangleWIthDiagonalAndSide(stNumbers Numbers)
{
    return Numbers.side * sqrt(pow(Numbers.Diagonal,2)-pow(Numbers.side,2));

}

void PrintResults(float Area)
{

    cout << "The Area of the Rectangle is " << Area << endl;

}

int main()
{
    PrintResults(AreaOfRectangleWIthDiagonalAndSide(ReadDiagonalAndSide()));
}