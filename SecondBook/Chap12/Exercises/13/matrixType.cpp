#include "matrixType.h"
#include <iomanip>


matrixType::matrixType(int rowsIn, int columnsIn)
{
    initializeMatrix(rowsIn, columnsIn);
    return;
}
void matrixType::fillMatrix()
{
    int tempNum;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << "Enter row " << i << " column " << j << ":";
            std::cin >> tempNum;
            matrixValues[i][j] = tempNum; 
        }
    }
}

void matrixType::initializeMatrix(int rowsIn, int columnsIn)
{
    try
    {   
        if (rowsIn < 0 || columnsIn < 0)
            throw 0;
        rows = rowsIn;
        columns = columnsIn;
        if (rows == 0 || columns == 0)
            matrixValues = nullptr;
        else
        {
            matrixValues = new int*[rows];
            for (int i = 0; i < rows; i++)
                matrixValues[i] = new int[columns];
        }
    }
    catch (int)
    {
        std::cout << "Invalid column or row. Matrix not initialized.";
        matrixValues = nullptr;
    }

    return;
}
matrixType matrixType::operator +(const matrixType& matrixIn)
{
    matrixType tempMatrix;
    if (rows == matrixIn.rows && columns == matrixIn.columns)
    {
        tempMatrix.initializeMatrix(rows, columns);
        for (int i = 0; i < rows; i ++)
        {
            for (int j = 0; j < columns; j++)
            {
                tempMatrix.matrixValues[i][j] = matrixValues[i][j] + matrixIn.matrixValues[i][j];
            }
        }
    }
    else
    {
        std::cout << "Rows and columns are not the same. Addition not done.";
    }

    return tempMatrix;
}
matrixType matrixType::operator -(const matrixType& matrixIn)
{
    matrixType tempMatrix;
    if (rows == matrixIn.rows && columns == matrixIn.columns)
    {
        tempMatrix.initializeMatrix(rows, columns);
        for (int i = 0; i < rows; i ++)
        {
            for (int j = 0; j < columns; j++)
            {
                tempMatrix.matrixValues[i][j] = matrixValues[i][j] - matrixIn.matrixValues[i][j];
            }
        }
    }
    else
    {
        std::cout << "Rows and columns are not the same. Addition not done.";
    }

    return tempMatrix;
}
matrixType matrixType::operator *(const matrixType& matrixIn)
{
    matrixType tempMatrix;
    int tempNum;
    if (columns == matrixIn.rows)
    {
        tempMatrix.initializeMatrix(rows, matrixIn.columns);
        for (int i = 0; i < rows; i ++)
        {
            for (int j = 0; j < matrixIn.columns; j++)
            {
                tempMatrix.matrixValues[i][j] = 0;
                for (int n = 0; n < columns; n++)
                    tempMatrix.matrixValues[i][j] += matrixValues[i][n] * matrixIn.matrixValues[n][j];
            }
        }
    }
    else
    {
        std::cout << "dimensions not applicable for multiplication.";
    }

    return tempMatrix;
}
matrixType& matrixType::operator =(matrixType&)
{
    return *this;
}
std::ostream& operator <<(std::ostream& osIn, const matrixType& matrixIn)
{
    std::cout << std::endl;
    for (int i = 0; i < matrixIn.rows; i++)
    {
        for (int j = 0; j < matrixIn.columns; j++)
        {
            std::cout << std::setw(5) << std::left << matrixIn.matrixValues[i][j];
        }
        std::cout << "\n\n";
    }
    return osIn;
}

matrixType::~matrixType()
{
    for (int i = 0; i < rows; i++)
        delete[] matrixValues[i];
    delete[] matrixValues;
    matrixValues = nullptr; 
}