#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    fstream inputStream;
    string name;
    int score;
    int records;

    inputStream.open("player.txt");

    for (inputStream >> records; records > 0; records--)
    {
        inputStream >> name;
        inputStream >> score;
        cout << name << " " << score << endl;
    }
    return 0;
}