#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//Rectangle Area Through Diagonal and width
void RectangleAreaProcedure()
{
    int width, Diagonal, Area;
    cout << "Please enter the width of the triangle!" << endl;
    cin >> width;

    cout << "Please enter the Diagonal of the triangle!" << endl;
    cin >> Diagonal;

    Area = width * sqrt(pow(Diagonal,2)-pow(width,2));

    cout << "Area = " << Area << endl;
}

int main()
{
    RectangleAreaProcedure();
}
