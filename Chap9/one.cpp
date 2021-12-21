#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string input;
    getline(cin, input, '.');
    input.push_back('.');
    for (int i = 0; i < input.length(); i++)
    {
        if ((i == 0) && (islower(input[0])))
        {
            cout << static_cast<char>(toupper(input[0]));
        }
        else if ((i != 0) && isupper(input[i]))
        {
            cout << static_cast<char>(tolower(input[i]));
        }
        else if ((input[i] == ' ') && (input[i-1] == ' '))
        {
        }
        else if (input[i] == '\n')
        {
        }
        else
        {
            cout << input[i];
        }
    }
    return 0;
}