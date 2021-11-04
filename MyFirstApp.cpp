#include <iostream>
using namespace std;

int main()
{
    int numberOfLanguages;

    cout << "Hello reader.\n"
         << "Welcome to C++.\n";

    cout << "How many programming languages have you used? ";
    cin >> numberOfLanguages;

    if (numberOfLanguages < 1)
        cout << "Read the preface. You may prefer\n"
             << "a more elemntary book by the same author. \n";
    else
        cout << "Enjoy the book.\n";

    return 0;
}