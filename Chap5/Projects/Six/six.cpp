#include <iostream>
using namespace std;
const int NUM_OF_JUDGES = 7;
double setDifficulty();
void fillArray(double list[], int size, int& numFilled);
double addScores(double scores[], int scoresSize);

int main()
{
    double scores[NUM_OF_JUDGES], difficulty, sum, finalScore;
    int scoresSize;
    cout << "Enter the difficulty grade of the dive: ";
    difficulty = setDifficulty();
    cout << "Enter the set of the seven judge's scores: ";
    fillArray(scores, NUM_OF_JUDGES, scoresSize);
    sum = addScores(scores, scoresSize);
    cout << sum << endl;
    finalScore = sum * difficulty * .6;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The final score for the diver is " << finalScore;
    return 0;
}
void fillArray(double list[], int size, int& numFilled)
//Preconditions: size is the declared size of the array
//Postcondition: numberUsed is the number of values stored in list
//list[0] through list[numberUsed-1] will be filled with values from user
{
    int next, index = 0;
    cin >> next;
    while ((next >= 0) && index < size)
    {
        if (next < 0 || next > 10)
            exit(2);
        list[index] = next;
        index++;
        cin >> next;
    }
    numFilled = index;
    return;
}
double setDifficulty()
{
    double difficulty;
    cin >> difficulty;
    if (difficulty < 1.2 || difficulty > 3.8)
    {
        cout << "Invalid score";
        exit(2);
    }
    return difficulty;
}
double addScores(double scores[], int scoresSize)
{
    cout << scoresSize;
    double sum(0), highScore(0), lowScore(10);
    for (int i = 0; i < scoresSize; i++)
    {
        sum += scores[i];
        cout << sum << endl;
        if (scores[i] > highScore)
            highScore = scores[i];
        if (scores[i] < lowScore)
            lowScore = scores[i];
    }
    sum -= (lowScore + highScore);
    return sum;
}