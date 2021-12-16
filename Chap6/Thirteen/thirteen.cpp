#include <iostream>
using namespace std;
class Player
{
public:
    void setName(string input);
    void setScore(int input);
    string getName();
    int getScore();
private:
    string name;
    int score;
};
void addNewPlayer(Player players[], int& numUsed);
void outputPlayers(Player players[], int& numUsed);
void outputOnePlayer(Player players[]);
void removePlayer(Player players[]);
int main()
{
    Player players[10];
    int numUsed(0);
    char selection;
    do
    {
        cout << "1: Add New Player, 2: Print player names.\n"
        << "3. Output player score. 4: remove player. X: End Program\n";
        cin >> selection;
        switch(selection)
        {
            case '1':
                addNewPlayer(players, numUsed);
                break;
            case '2':
                outputPlayers(players, numUsed);
                break;
            case '3':
                outputOnePlayer(players, numUsed);
                break;
            case '4':
                removePlayer(players, numUsed);
                break;
        }
    } while (selection != 'X');
    
}
void Player::setName(string input)
{
    name = input;
    return;
}
void Player::setScore(int input)
{
    score = input;
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
void addNewPlayer(Player players[])
{

}
void outputPlayers(Player players[]);
void outputOnePlayer(Player players[]);
void removePlayer(Player players[]);