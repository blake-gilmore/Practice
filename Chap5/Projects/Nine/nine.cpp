#include <iostream>
using namespace std;
void printGame(char gameBoard[]);
char checkWinner(char gameBoard[]);
void simulateXTurn(char gameBoard[]);
void simulateOTurn(char gameBoard[]);

int main()
{
    char isWinner = 'N';
    char gameBoard[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    do
    {
        printGame(gameBoard);
        simulateXTurn(gameBoard);
        isWinner = checkWinner(gameBoard);
        if (isWinner == 'N')
        {
            printGame(gameBoard);
            simulateOTurn(gameBoard);
            isWinner = checkWinner(gameBoard);
        }
    } while (isWinner == 'N');

    cout << isWinner << " is the winner!";

    return 0;
}

void printGame(char gameBoard[])
{
    int index = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << gameBoard[index] << " ";
            index++;
        }
        cout << endl;
    }
    return;
}
char checkWinner(char gameBoard[])
{
    if (gameBoard[0] == gameBoard[1] && gameBoard[0] == gameBoard[2])
        return gameBoard[0];
    if (gameBoard[3] == gameBoard[4] && gameBoard[3] == gameBoard[5])
        return gameBoard[3];
    if (gameBoard[6] == gameBoard[7] && gameBoard[6] == gameBoard[8])
        return gameBoard[6];

    if (gameBoard[0] == gameBoard[4] && gameBoard[0] == gameBoard[8])
        return gameBoard[0];
    if (gameBoard[2] == gameBoard[4] && gameBoard[2] == gameBoard[6])
        return gameBoard[2];

    if (gameBoard[0] == gameBoard[3] && gameBoard[0] == gameBoard[6])
        return gameBoard[0];
    if (gameBoard[1] == gameBoard[4] && gameBoard[1] == gameBoard[7])
        return gameBoard[1];
    if (gameBoard[2] == gameBoard[5] && gameBoard[2] == gameBoard[8])
        return gameBoard[2];

    return 'N';
}
void simulateXTurn(char gameBoard[])
{
    char selection;
    cout << "Player X, take your turn: ";
    cin >> selection;
    for (int i = 0; i < 9; i++)
    {
        if (gameBoard[i] == selection)
        {
            gameBoard[i] = 'X';
            break;
        }
    }
    return;
}
void simulateOTurn(char gameBoard[])
{
    char selection;
    cout << "Player O, take your turn: ";
    cin >> selection;
    for (int i = 0; i < 9; i++)
    {
        if (gameBoard[i] == selection)
        {
            gameBoard[i] = 'O';
            break;
        }
    }
    return;
}