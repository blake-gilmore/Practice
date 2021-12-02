#include <iostream>
#include <cstdlib>
using namespace std;
void simulateGame(int& noSwitch, int& yesSwitch); 
int main()
{
    srand(234);
    char letter;
    int noSwitch(0), yesSwitch(0);
    cout << "Press any letter to begin the simulation.";
    cin >> letter;

    for (int i = 0; i < 9999; i++)
    {
        simulateGame(noSwitch, yesSwitch);
    }

    cout << "After simulating 10,000 games, the contestant won " << noSwitch << " games when they didn't switch after being shown the third door, but won " << yesSwitch << " games when they did.";

    return 0;
}

void simulateGame(int& noSwitch, int& yesSwitch)
{
    int prizeDoor, doorChoice;
    prizeDoor = rand() % 3;
    doorChoice = rand() % 3;
    if (doorChoice == prizeDoor)
        noSwitch++;
    else
        yesSwitch++;
    return;
}