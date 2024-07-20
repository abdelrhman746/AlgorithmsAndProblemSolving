#include <iostream>
#include <cmath>
using namespace std;
struct stNumbers
{
    int Base;
    int Height;
};

stNumbers ReadBaseAndHeight()
{
    stNumbers Numbers;
    cout << "Please enter  Base!" << endl;
    cin >> Numbers.Base;
    cout << "Please enter  Height!" << endl;
    cin >> Numbers.Height;

    return Numbers;
}

float TriangleArea(stNumbers Numbers)
{
    return (Numbers.Base * Numbers.Height)/2;

}

void PrintResults(float Area)
{

    cout << "The Area of the Triangle is " << Area << endl;

}

int main()
{
    PrintResults(TriangleArea(ReadBaseAndHeight()));
}