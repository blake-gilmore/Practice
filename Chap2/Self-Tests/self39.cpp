#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    fstream inputStream;
    string nameHighScore;
    string tempName;
    int score;
    int records;
    int highScore = 0;
    

    inputStream.open("player.txt");

    for (inputStream >> records; records > 0; records--)
    {
        inputStream >> tempName;
        inputStream >> score;

        if (score > highScore)
        {
            highScore = score;
            nameHighScore = tempName;
        }
    }

    cout << nameHighScore << "  " << highScore << endl;
    return 0;
}