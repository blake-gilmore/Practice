#include <iostream>
#include <fstream>
using namespace std;
void findHighScore(string& highScoreName, int& highScore);
int main()
{
    string highScoreName;
    int highScore(0);

    findHighScore(highScoreName, highScore);
    cout << "The Highest score is " << highScoreName << "'s score at " << highScore << endl;

    return 0;
}

void findHighScore(string& highScoreName, int& highScore)
{
    ifstream inputStream;
    inputStream.open("scores.txt");
    string tempName;
    int tempScore;
    inputStream >> tempName;
    do
    {
        inputStream >> tempScore;
        if (tempScore > highScore)
        {
            highScoreName = tempName;
            highScore = tempScore;
        }
        inputStream >> tempName;
    }while (inputStream);

    return;
}