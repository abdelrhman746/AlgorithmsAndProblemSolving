#include <iostream>
#include <cmath>
using namespace std;
struct stNumbers
{
    float Circumferance;
    float Pi = 3.14;
};

stNumbers ReadCircumference()
{
    stNumbers Numbers;
    cout << "Please enter the Circumferance of the circle!" << endl;
    cin >> Numbers.Circumferance;

    return Numbers;
}

float CircleAreaAlongCircumference(stNumbers Numbers)
{
    return  pow(Numbers.Circumferance, 2)/ (Numbers.Pi * 4);

}

void PrintResults(float Area)
{
    cout << "The Area of the Circle is " << Area << endl;
}

int main()
{
    PrintResults(CircleAreaAlongCircumference(ReadCircumference()));
}