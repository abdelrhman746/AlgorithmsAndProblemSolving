#include <iostream>
#include <cmath>
using namespace std;
struct stNumbers
{
    int Radius;
    float Pi=3.14;
};

stNumbers ReadRadius()
{
    stNumbers Numbers;
    cout << "Please enter  Radius!" << endl;
    cin >> Numbers.Radius;
   
    return Numbers;
}

float CircleArea(stNumbers Numbers)
{
    return Numbers.Pi * pow(Numbers.Radius, 2);

}

void PrintResults(float Area)
{
    cout << "The Area of the Circle is " << Area << endl;
}

int main()
{
    PrintResults(CircleArea(ReadRadius()));
}