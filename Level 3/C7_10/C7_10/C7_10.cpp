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
            Array[i][j] = RandomNumber(1, 10);
        }
    }
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

void MultiplyTwoArrays(int Array1[3][3], int Array2[3][3], int ArrayLength, int ArrayWidth, int ArrayMultiply[3][3])
{
    for (int i = 0; i < ArrayLength; i++)
    {
        for (int j = 0; j < ArrayWidth; j++)
        {
            ArrayMultiply[i][j] = Array1[i][j] * Array2[i][j];
        }
    }
}

void TransposeMatrix(int Array[3][3], int ArrayLength, int ArrayWidth, int ArrayTransposed[3][3])
{
    for (int i = 0; i < ArrayLength; i++)
    {
        for (int j = 0; j < ArrayWidth; j++)
        {
            ArrayTransposed[j][i] = Array[i][j];
        }
    }
}

void PrintMatrixMiddleRow(int Array[3][3], int ArrayLength, int ArrayWidth)
{
    for (int j = 0; j < ArrayWidth; j++)
    {
        printf("%02d   ", Array[ArrayLength / 2][j]);
    }
    cout << endl;

}

void PrintMatrixMiddleCol(int Array[3][3], int ArrayLength, int ArrayWidth)
{
    for (int j = 0; j < ArrayWidth; j++)
    {
        printf("%02d   ", Array[j][ArrayWidth / 2]);
    }
    cout << endl;
}
int SumOfMatrix(int Array[3][3], int ArrayLength, int ArrayWidth)
{
    int Sum = 0;
    for (int i = 0; i < ArrayLength; i++)
    {
        for (int j = 0; j < ArrayWidth; j++)
        {
            Sum += Array[i][j];
        }
    }
    return Sum;
}
void PrintMatrix(int Array[3][3], int ArrayLength, int ArrayWidth)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        for (int j = 0; j < ArrayWidth; j++)
        {
            printf("%02d   ", Array[i][j]);
        }
        cout << endl;
    }
}
int main()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    int Array1[3][3];
    ReadMatrixRandomNumbers(Array1, 3, 3);
    cout << "Matrix1: " << endl;
    PrintMatrix(Array1, 3, 3);
    cout << "\nSum Matrix1 is: "<< SumOfMatrix(Array1, 3, 3) << endl;
   


    return 0;
}
