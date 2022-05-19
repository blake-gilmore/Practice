#include "addressBook.h"
using namespace std;
#include <fstream>

int main()
{
    addressBook myBook;
    ifstream fromFile;
    fromFile.open("book.txt");
    myBook.loadData(fromFile);
    myBook.printData();
    return 0;
}