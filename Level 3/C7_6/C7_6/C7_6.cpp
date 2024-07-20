#include <iostream>
#include <iomanip>
using namespace std;

int ReadPostiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;

}

int RandomNumber(int From, int To)
{
    //Function to generate a random number

    int randNum = rand() % (To - From + 1) + From;

    return randNum;
}

void ReadMatrixOrderedNumbers(int Array[3][3], int ArrayLength, int ArrayWidth)
{
    int counter = 0;
    for (int i = 0; i < ArrayLength; i++)
    {
        for (int j = 0; j < ArrayWidth; j++)
        {
            counter++;
            Array[i][j] = counter;
        }
    }
}


void PrintMatrix(int Array[3][3], int ArrayLength, int ArrayWidth)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        for (int j = 0; j < ArrayWidth; j++)
        {
            cout << setw(3) << Array[i][j] << "   ";
        }
        cout << endl;
    }
}
int main()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    int Array[3][3];
    int ArraySum[3];
    ReadMatrixOrderedNumbers(Array, 3, 3);
    cout << "The Following is a 3x3 random matrix: " << endl;
    PrintMatrix(Array, 3, 3);
    cout << endl;
    

    return 0;
}
