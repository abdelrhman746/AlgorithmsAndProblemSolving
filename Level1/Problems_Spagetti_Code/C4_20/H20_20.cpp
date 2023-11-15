#include <iostream>
using namespace std;
// Circle Area inscribed in a square
int main()
{
    short side, Pi = 3.14;
    cout << "Please enter the side of the square" << endl;
    cin >> side;
    short Area = (Pi * side * side) / 4;

    cout << "The Area of the circle is :" << Area << endl;
}
