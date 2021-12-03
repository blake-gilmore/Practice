#include <iostream>
#include <fstream>
using namespace std;

int getPlayerScore(string playerName);
void isAverage(int playerScore);
double findAverage();

int main()
{
    string playerName;
    int playerScore;
    cout << "Enter the player's name you'd like to check their score: ";
    cin >> playerName;

    playerScore = getPlayerScore(playerName);
    isAverage(playerScore);

}

int getPlayerScore(string playerName)
{
    string tempName;
    ifstream inputStream;
    int score;
    inputStream.open("scores.txt");
    inputStream >> tempName;
    do
    {
        if (tempName == playerName)
        {
            inputStream >> score;
            return score;
        }

    } while (inputStream >> tempName);
    inputStream.close();
    return 0;   

}
void isAverage(int playerScore)
{
    double average = findAverage();

    if (playerScore < average)
        cout << "The player is below average";
    else if (playerScore == average)
        cout << "The player is the average";
    else 
        cout << "the player is above average";

    return;
}
double findAverage()
{
    int count(0), score;
    string name;
    double totalScore(0);
    double averageScore;
    ifstream inputStream;
    inputStream.open("scores.txt");
    inputStream >> name;
    do
    {
        inputStream >> score;
        totalScore += score;
        count++;
    } while (inputStream >> name);

    inputStream.close();
    return (totalScore / count);
}