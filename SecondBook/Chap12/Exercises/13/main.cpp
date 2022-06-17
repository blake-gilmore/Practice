

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