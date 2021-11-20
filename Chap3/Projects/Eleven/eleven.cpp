#include <iostream>
#include <cstdlib>
using namespace std;

int humanTurn(int humanTotalScore);
int computerTurn(int computerTotalScore);
bool checkInput(char correct1, char correct2, char input);

int main()
{
    int humanTotalScore(0),computerTotalScore(0);

    cout << "Welcome to the game of Pig.\n\nIt's your turn.\n\n";

    do
    {
        humanTotalScore = humanTurn(humanTotalScore);
        cout << "Your score after that round is " << humanTotalScore << endl;

        if (humanTotalScore < 100)
        {
            computerTotalScore = computerTurn(computerTotalScore);
            cout << "The computer's score after their turn is " << computerTotalScore << endl << endl;
        }


    } while (humanTotalScore < 100 && computerTotalScore < 100);

    if (humanTotalScore >=100)
        cout << "Congratulations! You win!\n";
    else
        cout << "You lost.\n\n";
    
}

int humanTurn(int humanTotalScore)
//humanTotalScore is the current score of the human player
//Runs the human player through a round of Pig and returns the new score with added points
{
    int diceRoll, tempScore(0);
    char input;
    do
    {
        diceRoll = (rand()%6) + 1;

        if (diceRoll != 1)
        {
            tempScore+= diceRoll;
            do
            {
                cout << "Your dice roll is " << diceRoll << ", and your current total rolls for this round is " << tempScore << ", would you like to roll again or hold? (r/h): ";
                cin >> input;
            } while (checkInput('h', 'r', input) == false);
        }
        else
        {
            tempScore = 0;
            cout << "You rolled a " << diceRoll << ", your score for this round is 0.\n";
        }
        
    } while (input == 'r' && diceRoll != 1);
    return humanTotalScore + tempScore;

}

int computerTurn(int computerTotalScore)
//computerTotalScore is computer's current total score in game
//runs computer through a turn and returns it's new total score
{
    int tempScore(0), diceRoll;
    do
    {
        diceRoll = (rand()%6) + 1;
        if (diceRoll > 1)
        {
            tempScore+= diceRoll;
        }
        else 
            tempScore = 0;

    } while (tempScore < 20 && diceRoll != 1);
    
    return computerTotalScore + tempScore;
}


bool checkInput(char correct1, char correct2, char input)
//Accepts two characters as a correct input and the user's input
//Compares user input to correct options and determines if it matches
{
    if (input == correct1 || input == correct2)
        return true;
    else
    {
        cout << "Incorrect input.\n\n";
        return false;
    }
}
