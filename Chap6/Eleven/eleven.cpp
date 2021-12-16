#include <iostream>
#include <fstream>

using namespace std;
const int MAX_PLAYERS = 10;
class Player
{
public:
    string getName();
    int getScore();
    void setName(string in);
    void setScore(int num);
private:
    string name;
    int score;
};
void getHighScores(Player players[], int numEntered);
void getData(Player players[], int& numEntered)
{
    ifstream inputStream;
    string next;
    int nextScore;
    inputStream.open("scores.txt");
    while (inputStream >> next)
    {
        players[numEntered].setName(next);
        inputStream >> nextScore;
        players[numEntered].setScore(nextScore);
        numEntered++;
    }
    inputStream.close();
    return;
}
void printTopPlayers(Player players[])
{
    for (int i = 0; i < 3; i++)
    {
        cout << players[i].getName() << " " << players[i].getScore() << endl;
    }
    return;
}

int main()
{
    int numEntered(0);
    Player players[MAX_PLAYERS];
    getData(players, numEntered);
    getHighScores(players, numEntered);
    printTopPlayers(players);
}
void getHighScores(Player players[], int numEntered)
{
    Player temp;
    for (int i = 0; i < numEntered; i++)
    {
        for (int j = i + 1; j <= numEntered; j++)
        {
            if (players[j].getScore() > players[i].getScore())
            {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }
    return;
}
void Player::setScore(int num)
{
    score = num;
    return;
}
void Player::setName(string in)
{
    name = in;
    return;
}

string Player::getName()
{
    return name;
}
int Player::getScore()
{
    return score;
}
