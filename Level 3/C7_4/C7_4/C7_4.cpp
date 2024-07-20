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

void ReadMatrixRandomNumbers(int Array[3][3], int ArrayLength, int ArrayWidth)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        for (int j = 0; j < ArrayWidth; j++)
        {
            Array[i][j] = RandomNumber(1, 100);
        }
    }
}

int ColSum(int Array[3][3], int ArrayLength, int ColNumber)
{
    int Sum = 0;
    for (int j = 0; j < ArrayLength; j++)
    {
        Sum = Sum + Array[j][ColNumber];
    }
    return Sum;
}

void PrintEachColSum(int Array[3][3], int ArrayLength, int ArrayWidth)
{
    cout << "The Following are the sum of each Col in the matrix:" << endl;
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << "Col " << i + 1 << " Sum = " << ColSum(Array, ArrayLength, i) << endl;
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
    ReadMatrixRandomNumbers(Array, 3, 3);
    cout << "The Following is a 3x3 random matrix: " << endl;
    PrintMatrix(Array, 3, 3);
    cout << endl;
    PrintEachColSum(Array, 3, 3);

    return 0;
}
