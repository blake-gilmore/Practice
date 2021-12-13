#include <iostream>
using namespace std;
void addPlayer(string names[], int scores[], int& numUsed);
void printPlayers(string names[], int scores[], int numUsed);
void outputScore(string names[], int scores[], int numUsed);
void removePlayer(string names[], int scores[], int& numUsed);
void pushPlayer(string names[], int scores[], int& numUsed, int index);

void printMenu();
int main()
{
    int scores[10];
    int numUsed(0);
    string names[10];
    char input;
    do
    {
        printMenu();
        cin >> input;
        switch(input)
        {
            case 'a':
                addPlayer(names, scores, numUsed);
                break;
            case 'b':
                printPlayers(names, scores, numUsed);
                break;
            case 'c':
                outputScore(names, scores, numUsed);
                break;
            case 'd':
                removePlayer(names, scores, numUsed);
                break;
        }
    } while (input != 'e');
    return 0;
}
void printMenu()
{
    cout << "a. Add new player and score." << endl
    << "b. Print names and scores." << endl
    << "c. Output selected player score." << endl
    << "d. enter player name to remove." << endl;
    return;
}
void addPlayer(string names[], int scores[], int& numUsed)
{
    if (numUsed == 10)
    {
        cout << "Player list full.";
        return;
    }
    cout << "Enter player name: ";
    cin >> names[numUsed];
    cout << "Enter player score: ";
    cin >> scores[numUsed];
    numUsed++;
    return;
}
void printPlayers(string names[], int scores[], int numUsed)
{
    for (int i = 0; i < numUsed; i++)
    {
        cout << names[i] << ": " << scores[i] << endl;
    }
    return;
}
void outputScore(string names[], int scores[], int numUsed)
{
    string userName;
    int index;
    bool nameExists(false);
    int userScore;
    cout << "Enter player name: ";
    cin >> userName;
    for (int i = 0; i < numUsed; i++)
    {
        if (names[i] == userName)
        {
            nameExists = true;
            index = i;
        }
    }
    if (nameExists == false)
    {
        cout << "Player has not been entered yet.";
        return;
    }
    cout << names[index] << ": " << scores[index] << endl;
    return;
}
void removePlayer(string names[], int scores[], int& numUsed)
{
    string userName;
    int index;
    bool nameExists(false);
    cout << "Enter player name: ";
    cin >> userName;
    for (int i = 0; i < numUsed; i++)
    {
        if (names[i] == userName)
        {
            nameExists = true;
            index = i;
        }
    }
    if (nameExists == false)
    {
        cout << "Player has not been entered yet.";
        return;
    }

    pushPlayer(names, scores, numUsed, index);
    return;
}
void pushPlayer(string names[], int scores[], int& numUsed, int index)
{
    for (int i = index; i < numUsed-1; i++)
    {
        names[i] = names[i+1];
        scores[i] = scores[i+1];
    }
    numUsed--;
    return;
}