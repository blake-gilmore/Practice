#include <iostream>
class matrixType
{
public:
    matrixType(int = 0, int = 0);
    void initializeMatrix(int, int);
    matrixType operator +(const matrixType&);
    matrixType operator -(const matrixType&);
    matrixType operator *(const matrixType&);
    matrixType& operator =(matrixType&);
    friend std::ostream& operator <<(std::ostream&, const matrixType&);
    void fillMatrix();
    ~matrixType();
private:
    int rows;
    int columns;
    int** matrixValues;
};

