class ticTacToe
{
public:
    ticTacToe();
    void makeNextMove();
    bool isFinished();
    void ResetBoard();
private:
    char board[3][3];
    bool turn; //0 for O and 1 for X
    void printBoard();
    void checkWinConditions();
    void announceWinner(char) const;
};