/*Design a class to perform various matrix operations. A matrix is a set of
numbers arranged in rows and columns. Therefore, every element of a
matrix has a row position and a column position. If A is a matrix of five
rows and six columns, we say that the matrix A is of the size 5  6 and
sometimes denote it as A56. Clearly, a convenient place to store a matrix is
in a two-dimensional array. Two matrices can be added and subtracted if
they have the same size. Suppose A = [aij] and B = [bij] are two matrices of
the size m  n, in which a ij denotes the element of A in the ith row and the
jth column, and so on. The sum and difference of A and B are given by:
A þ B ¼ ½aij þ bij
A  B ¼ ½aij  bij
The multiplication of A and B (A * B) is defined only if the number
of columns of A is the same as the number of rows of B. If A is of the size
m  n and B is of the size n  t, then A * B = [cik] is of the size m  t and
the element cik is given by the formula:
cik ¼ a i1b1k þ ai2b2k þ    þ a in b nk
Design and implement a class matrixType that can store a matrix of any size.
Overload the operators +, -, and * to perform the addition, subtraction, and
multiplication operations, respectively, and overload the operator << to output a
matrix. Also, write a test program to test various operations on the matrices.*/

#include "matrixType.h"
int main()
{
    matrixType first;
    matrixType second;
    int tempInt1, tempInt2;
    std::cout << "Enter number of rows: ";
    std::cin >> tempInt1;
    std::cout << "Enter number of columns: ";
    std::cin >> tempInt2;

    first.initializeMatrix(tempInt1, tempInt2);

    std::cout << "Enter number of rows: ";
    std::cin >> tempInt1;
    std::cout << "Enter number of columns: ";
    std::cin >> tempInt2;
    
    second.initializeMatrix(tempInt1, tempInt2);

    first.fillMatrix();
    second.fillMatrix();

    std::cout << "First matrix:\n";
    std::cout << first << std::endl << std::endl;
    std::cout << "Second matrix:\n";
    std::cout << second << std::endl << std::endl;

    std::cout << "Matrix 1 plus Matrix 2\n\n";
    std::cout << first + second;    

    std::cout << "\n\n";
    std::cout << "Matrix 1 minus matrix 2\n\n";
    std::cout << first - second;

    std::cout << "\n\n";
    std::cout << "Matrix 1 times matrix 2\n\n";
    std::cout << first * second;


    return 0;
}