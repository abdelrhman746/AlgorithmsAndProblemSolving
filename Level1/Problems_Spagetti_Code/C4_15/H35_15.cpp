#include <iostream>
#include <string>
using namespace std;

void RectangleAreaProcedure()
{
    int width, length, Area;
    cout << "Please enter the width of the triangle!" << endl;
    cin >> width;

    cout << "Please enter the length of the triangle!" << endl;
    cin >> length;

    Area = width * length;

    cout << "Area = " << Area << endl;
}

int main()
{
    RectangleAreaProcedure();
}
