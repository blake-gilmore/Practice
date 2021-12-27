#include <iostream>
#include <string>
#include <fstream>
using std::ifstream;
using std::string;
using std::endl;
using std::cout;
using std::cin;

int main()
{
    ifstream inputStream;
    inputStream.open("words.txt");
    string next;
    int alphabet[58], fileWord[58];
    bool canFit(true);
    cout << "Enter a word: ";
    cin >> next;
    for (int i = 0; i < 58; i++)
    {
        alphabet[i] = 0;
    }
    for (int i = 0; i < next.length(); i++)
    {
        alphabet[(next[i] - 65)]++;
    }
    while (inputStream >> next)
    {
        canFit = true;
        for (int i = 0; i < 58; i++)
            fileWord[i] = 0;
            
        for (int i = 0; i < next.length(); i++)
        {
            fileWord[(next[i] - 65)]++;
        }
        
        for (int i = 0; i < 58; i++)
        {
            if ((fileWord[i] > 0) && (alphabet[i] < fileWord[i]))
            {
                canFit = false;
            }
        }
        if (canFit == true)
            cout << next << endl;
            
    }
    inputStream.close();
}