#include "ticTacToe.h"
#include <iostream>

void ticTacToe::printBoard()
{
    using std::cout;
    using std::endl;
    cout << "--------------------------------\n\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
    cout << "--------------------------------\n\n";
    return;
}
ticTacToe::ticTacToe()
{
    ResetBoard();
    turn = false;
    return;
}
void ticTacToe::makeNextMove()
{
    using std::cout;
    using std::endl;
    using std::cin;
    char newTurn;
    int row, column;
    bool isFull(false);
    if (turn == false)
        newTurn = 'O';
    else
        newTurn = 'X';

    printBoard();
    do
    {
        isFull = false;
        cout << newTurn << " turn. Select row (1-3)";
        cin >> row;
        cout << "Select column (1-3)";
        cin >> column;

        if (board[row-1][column-1] == '-')
        {
                board[row-1][column-1] = newTurn;
        }
        else
            isFull = true;

    }while (isFull == true);
    
    return;
}
bool ticTacToe::isFinished()
{
    bool finished = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
        }
    }
}
void ticTacToe::ResetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = '-';
        }
    }
    return;
}