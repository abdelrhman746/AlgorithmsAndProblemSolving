#include <iostream>
#include <iomanip>
using namespace std;

enum enMatrixEquality { NotEqual, Equal };

int ReadPostiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message;
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

void FillIdentityMatrix(int Array[3][3], int ArrayLength, int ArrayWidth)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        for (int j = 0; j < ArrayWidth; j++)
        {
            if (i == j)
            {
                Array[i][j] = 1;
            }
            else
            {
                Array[i][j] = 0;
            }
        }
    }
}
void FillScalarMatrix(int Array[3][3], int ArrayLength, int ArrayWidth, int ScalarNumber)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        for (int j = 0; j < ArrayWidth; j++)
        {
            if (i == j)
            {
                Array[i][j] = ScalarNumber;
            }
            else
            {
                Array[i][j] = 0;
            }
        }
    }
}
bool CheckIdentityMatrix(int Array[3][3], int ArrayLength, int ArrayWidth)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        for (int j = 0; j < ArrayWidth; j++)
        {
            if (i == j && Array[i][j] != 1)
            {
                return false;
            }
            else if (i != j && Array[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

bool CheckScalarMatrix(int Array[3][3], int ArrayLength, int ArrayWidth)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        for (int j = 0; j < ArrayWidth; j++)
        {
            if (i == j && Array[i][j] != Array[0][0])
            {
                return false;
            }
            else if (i != j && Array[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

enMatrixEquality CheckMatriciesEquality(int Array1[3][3], int ArrayLength, int ArrayWidth, int Array2[3][3])
{
    int Sum1, Sum2;

    Sum1 = SumOfMatrix(Array1, ArrayLength, ArrayWidth);

    Sum2 = SumOfMatrix(Array2, ArrayLength, ArrayWidth);

    if (Sum1 == Sum2)
    {
        return enMatrixEquality::Equal;
    }
    else
    {
        return enMatrixEquality::NotEqual;
    }
}

bool CheckMatriciesTypical(int Array1[3][3], int ArrayLength, int ArrayWidth, int Array2[3][3])
{
    for (int i = 0; i < ArrayLength; i++)
    {
        for (int j = 0; j < ArrayWidth; j++)
        {
            if (Array1[i][j] != Array2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}
int CountNumberInMatrix(int Array[3][3], int ArrayLength, int ArrayWidth, int Number)
{
    int Counter = 0;
    for (int i = 0; i < ArrayLength; i++)
    {
        for (int j = 0; j < ArrayWidth; j++)
        {
            if (Array[i][j] == Number)
            {
                Counter++;
            }
        }
    }
    return Counter;
}
bool CheckSparceMatrix(int Array[3][3], int ArrayLength, int ArrayWidth)
{
    int MatrixSize = ArrayLength * ArrayWidth;

    return (CountNumberInMatrix(Array, ArrayLength, ArrayWidth, 0) >= MatrixSize / 2);
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
    int Array1[3][3] = { {1,0,0},{1,2,3},{0,0,0} };
    int Key;
    int Counter;
    cout << "Matrix1: " << endl;
    PrintMatrix(Array1, 3, 3);
    if (CheckSparceMatrix(Array1, 3, 3))
    {
        cout << "Yes: It is Sparce" << endl;
    }
    else
    {
        cout << "No: It is Not Sparce" << endl;
    }
    return 0;
}
