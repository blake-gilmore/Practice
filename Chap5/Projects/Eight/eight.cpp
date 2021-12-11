#include <iostream>
#include <cstdlib>
using namespace std;
const int MAX_PEOPLE = 50;
void simulatePossibilities(double probabilityOfBirthday[]);
double simulateOneSituation(int numInRoom);
void outputProbabilities(double probabilityOfBirthday[]);

int main()
{
    double probabilityOfBirthday[MAX_PEOPLE];
    char selection;

    cout << "Enter any character to begin the simulation: ";
    cin >> selection;
    cout << selection;

    simulatePossibilities(probabilityOfBirthday);
    outputProbabilities(probabilityOfBirthday);
    return 0;
}

void simulatePossibilities(double probabilityOfBirthday[])
{
    int birthdays[MAX_PEOPLE];
    for (int i = 1; i < MAX_PEOPLE; i++)
    {
        probabilityOfBirthday[i] = simulateOneSituation(i+1);
    }
    return;
}
void outputProbabilities(double probabilityOfBirthday[])
{
    for (int i = 1; i < MAX_PEOPLE; i++)
        cout << "For " << (i + 1) << " people in a room, the probability is about " << probabilityOfBirthday[i] << endl;
    return;
}
double simulateOneSituation(int numInRoom)
{
    int birthdays[MAX_PEOPLE];
    bool sameBirthdays = false;
    int numSameBirthdays = 0;
    for (int i = 0; i < 5000; i++)
    {
        for (int j = 0; j < numInRoom; j++)
            birthdays[j] = rand()%365;
        for (int j = 0; j < (numInRoom - 1); j++)
        {
            for (int k = (j + 1); k < numInRoom; k++)
            {
                if (birthdays[j] == birthdays[k])
                    sameBirthdays = true;
            }
        }
        if (sameBirthdays == true)
        {
            numSameBirthdays++;
        }
        sameBirthdays = false;
    }
    return (numSameBirthdays / 5000.0);
}
