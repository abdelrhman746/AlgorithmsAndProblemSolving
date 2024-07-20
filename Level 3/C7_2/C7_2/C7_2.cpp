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

int RowSum(int Array[3][3], int RowNumber, int ArrayWidth)
{
    int Sum = 0;
    for (int j = 0; j < ArrayWidth; j++)
    {
        Sum = Sum + Array[RowNumber][j];
    }
    return Sum;
}

void PrintEachRawSum(int Array[3][3], int ArrayLength, int ArrayWidth)
{
    cout << "The Following are the sum of each row in the matrix:" << endl;
    for (int i = 0; i < ArrayLength; i++)
    {
        cout<<"Row "<<i+1<<" Sum = "<< RowSum(Array,i,ArrayWidth) << endl;
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
    PrintEachRawSum(Array, 3, 3);

    return 0;
}