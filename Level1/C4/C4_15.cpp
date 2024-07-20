#include <iostream>
using namespace std;
struct stNumbers
{
    int Length;
    int Width;
};

stNumbers ReadNumber()
{
    stNumbers Numbers;
    cout << "Please enter  Length!" << endl;
    cin >> Numbers.Length;
    cout << "Please enter  Width!" << endl;
    cin >> Numbers.Width;

    return Numbers;
}

int AreaOfRectangle(stNumbers Numbers)
{
    return Numbers.Length * Numbers.Width;

}

void PrintResults(stNumbers Numbers)
{

    cout << "The Area of the Rectangle is " << AreaOfRectangle(Numbers) << endl;

}

int main()
{
    PrintResults(ReadNumber());
}