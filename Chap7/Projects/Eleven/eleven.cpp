#include <iostream>
#include <vector>

using namespace std;
class Player
{
public:
    Player();
    Player(string name, int num);
    string getName() const;
    int getScore() const;
private:
    string playerName;
    int score;
};
void addPlayer( vector<Player>& players);
void printPlayers(const vector<Player>& players);
void outputName(const vector<Player>& players);
void removePlayer(vector<Player>& players);

int main()
{
    vector<Player>players;
    int selection;
    do
    {
        cout << "1. Add new player and score. \n" << "2. Print player names.\n"
        << "3. Output Player Score \n" << "4. Delete Player\n";
        cin >> selection;
        switch(selection)
        {
            case 1:
                addPlayer(players);
                break;
            case 2:
                printPlayers(players);
                break;
            case 3: 
                outputName(players);
                break;
            case 4:
                removePlayer(players);
                break;
        }
    } while (selection != 5);
    return 0;    
}
void addPlayer( vector<Player>& players)
{
    string nameInput;
    int input;
    cout << "Enter the name of the player: ";
    cin >> nameInput;
    cout << "Enter the player's score: ";
    cin >> input;
    players.push_back(Player(nameInput, input));
    return;
}
void printPlayers(const vector<Player>& players)
{
    for (int i = 0; i < players.size(); i ++)
    {
        cout << players[i].getName() << ": " << players[i].getScore() << endl;
    }
    return;
}
void outputName(const vector<Player>& players)
{
    string selection;
    bool found(false);
    cout << "What player name do you want to find?";
    cin >> selection;
    for (int i =0; i < players.size(); i++)
    {
        if (players[i].getName() == selection)
        {
            cout << players[i].getName() << ": " << players[i].getScore();
            found = true;
        }
    }
    if (found == false)
    {
        cout << "Couldn't find the name.\n";
    }
    return;
}
void removePlayer(vector<Player>& players)
{
    string selection;
    cout << "Enter the name you want to delete: ";
    cin >> selection;
    for (int i = 0; i < players.size(); i++)
    {
        if (players[i].getName() == selection)
        {
            players.erase(players.begin() + i);
            break;
        }
    }
    return;
}

Player::Player(string name, int num)
{
    playerName = name;
    score = num;
    return;
}
Player::Player()
{
    return;
}
string Player::getName() const
{
    return playerName;
}
int Player::getScore() const
{
    return score;
}