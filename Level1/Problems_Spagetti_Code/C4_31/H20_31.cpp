#include <iostream>
using namespace std;
// power of 2,3,4
int main()
{
    short Num;
    short pwrf2, pwrf3, pwrf4;
    cout << "Please enter a Number" << endl;
    cin >> Num;
    pwrf2 = Num * Num;
    pwrf3 = Num * Num * Num;
    pwrf4 = Num * Num * Num * Num;
    cout << "Power of 2 is : " << pwrf2 << endl << "Power of 3 is : " << pwrf3 << endl << "Power of 4 is : " << pwrf4 << endl;
}
