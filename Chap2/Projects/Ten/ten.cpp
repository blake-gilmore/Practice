#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string hate = "hate";
    string text;
    ifstream inputStream;
    inputStream.open("ihate.txt");

    while (inputStream >> text)
    {
        if (text == hate)
            cout << "love";
        else
            cout << text;

        cout << " ";
    }

    cout << endl;
    return 0;
}