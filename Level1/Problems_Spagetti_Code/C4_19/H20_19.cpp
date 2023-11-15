#include <iostream>
using namespace std;
// Circle Area Through Diameter
int main()
{
    short diameter,Pi=3.14;
    cout << "Please enter the diameter of the circle" << endl;
    cin >> diameter;
    short Area = (Pi*diameter*diameter) / 4;

    cout << "The Area of the circle is :" << Area << endl;
}
