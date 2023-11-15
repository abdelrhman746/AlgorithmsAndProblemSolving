#include <iostream>
using namespace std;

void Grade()
{
    int Grade;
    cout << "Please enter your grade!" << endl;
    cin >> Grade;
    if (Grade >= 90 && Grade <= 100)
    {
        cout << "A" << endl;
    }
    else if (Grade >= 80 && Grade < 90)
    {
        cout << "B" << endl;
    }
    else if (Grade >= 70 && Grade < 80)
    {
        cout << "C" << endl;
    }
    else if (Grade >= 60 && Grade < 70)
    {
        cout << "D" << endl;
    }
    else if (Grade >= 50 && Grade < 60)
    {
        cout << "E" << endl;
    }
    else if (Grade >= 0 && Grade < 50)
    {
        cout << "F" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
}

int main()
{
    Grade();
}
