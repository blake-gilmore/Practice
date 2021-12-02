#include <iostream>
#include <cstdlib>
using namespace std;
void simulateDuel(int& aaronWin, int& bobWin, int& charlieWin);
void printDuelResults(int aaronWin, int bobWin, int charlieWin);
int main()
{
    int aaronWin(0), bobWin(0), charlieWin(0);

    for (int i = 0; i < 9999; i++)
    {
        simulateDuel(aaronWin, bobWin, charlieWin);
    }
    printDuelResults(aaronWin, bobWin, charlieWin);
}

void simulateDuel(int& aaronWin, int& bobWin, int& charlieWin)
{
    int aaronShot, bobShot, charlieShot;
    int numAlive = 3;
    bool aaronAlive(true), bobAlive(true), charlieAlive(true), firstGame(true);

    do
    {
        if (aaronAlive)
        {
            aaronShot = rand() % 3;
            if (firstGame)
            {
                firstGame = false;
            }
            else if (charlieAlive && aaronShot == 2)
            {
                charlieAlive = false;
                numAlive--;
            }
            else if (bobAlive && aaronShot == 2)
            {
                bobAlive = false;
                numAlive--;
            }
        }
        if(bobAlive)
        {
            bobShot = rand() % 2;
            if (charlieAlive && bobShot == 1)
            {
                charlieAlive = false;
                numAlive--;
            }
            else if (aaronAlive && aaronShot == 1)
            {
                aaronAlive = false;
                numAlive--;
            }
        }
        if (charlieAlive)
        {
            if (bobAlive)
            {
                bobAlive = false;
                numAlive--;
            }
            else if (aaronAlive)
            {
                aaronAlive = false;
                numAlive--;
            }
        }

    } while (numAlive > 1);
    if (aaronAlive)
        aaronWin++;
    else if (bobAlive)
        bobWin++;
    else if (charlieAlive)
        charlieWin++;
    
}
void printDuelResults(int aaronWin, int bobWin, int charlieWin)
{
    cout << "After 10,000 games, it turns out that Aaron won " << aaronWin << " many times, Bob won " << bobWin << " times, and Charlie won " << charlieWin << " times.\n";
    return;
}