#include "ticTacToe.h"
#include <iostream>
int main()
{
    ticTacToe game;

    int selection;
    do
    {
        while (game.isFinished() == false)
        {
            game.makeNextMove();
        }
        std::cout << "Would you like to play again? (1): ";
        std::cin >> selection;
        
    } while (selection == 1);
    return 0;
}