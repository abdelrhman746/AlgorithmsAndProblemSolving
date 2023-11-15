#include <iostream>
using namespace std;
// Average of 3 Marks
int main()
{
    short Mark1, Mark2, Mark3;
    cout << "Please enter the 1st Mark!" << endl;
    cin >> Mark1;
    cout << "Please enter the 2nd Mark!" << endl;
    cin >> Mark2;
    cout << "Please enter the 3rd Mark!" << endl;
    cin >> Mark3;
    short Avg = (Mark1 + Mark2 + Mark3) / 3;
    cout << "the average of the three Marks is " << Avg << endl;
}
