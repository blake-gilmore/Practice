#include "romanType.h"

int main ()
{
    using std::cout;
    using std::cin;
    romanType newRoman;
    string userRoman;

    cout << "Enter roman numeral: ";
    cin >> userRoman;
    newRoman.setRoman(userRoman);
    newRoman.printEither();
    return 0;
}