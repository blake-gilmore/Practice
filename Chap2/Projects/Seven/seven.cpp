#include <iostream>
using namespace std;

int main()
{
    int exerciseNumber = 0;
    double totalPercentage = 0;
    double currentScore = 0;
    double pointsPossible = 0;
    double totalPoints = 0;
    double pointsReceived = 0;

    cout << "How many exercises: ";
    cin >> exerciseNumber;

    for (int i = 1; i <= exerciseNumber; i++)
    {
        cout << "Score received for exercise " << i << ":";
        cin >> currentScore;

        cout << "Total points possible for exercise " << i << ":";
        cin >> pointsPossible;

        totalPoints += pointsPossible;
        pointsReceived += currentScore;
    }

    totalPercentage = pointsReceived / totalPoints;
    totalPercentage *= 100;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Your total is " << pointsReceived << " out of " << totalPoints << ", or %" << totalPercentage << endl;

    return 0;
}