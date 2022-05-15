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
    turn = !turn;
    return;
}
bool ticTacToe::isFinished()
{
    bool finished = false;
    char set;
    //Check row win conditions
    for (int i = 0; i < 3; i++)
    {
        set = board[i][0];
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != set)
            {
                finished = false;
            }
            else
                finished = true;
        }
        if (finished == true && set != '-')
        {
            announceWinner(set);
            return true;
        }
    }
    //Check column win conditions
    for (int i = 0; i < 3; i++)
    {
        set = board[0][i];
        for (int j = 0; j < 3; j++)
        {
            if (board[j][i] != set)
            {
                finished = false;
            }
            else
                finished = true;
        }
        if (finished == true && set != '-')
        {
            announceWinner(set);
            return true;
        }
    }

    //Check row win conditions
    set = board[0][0];
    if (set == board[1][1] && set == board[2][2] && set != '-')
    {
        announceWinner(set);
        return true;
    }
    set = board[0][2];
    if (set == board[1][1] && set == board[2][0] && set != '-')
    {
        announceWinner(set);
        return true;
    }
    return false;
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
void ticTacToe::announceWinner(char winner) const
{
    std::cout << winner << " wins!" << std::endl;
    return;
}
