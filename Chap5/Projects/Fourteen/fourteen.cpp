#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
const int MOVIES = 6;
const int REVIEWERS = 4;
const int USER = 3;
void readData(int scores[][MOVIES]);
void userInput(int scores[][MOVIES], int userScores[MOVIES]);
void setInitialUserScores(int userScores[]);
int getReviewer(int scores[][MOVIES], int userScores[]);
void outputRatings(int closestReviewer, int userScores[], int scores[][MOVIES]);
int calculateCloseness(int userScores[], int scores[][MOVIES], int index);
int main()
{
    int scores[REVIEWERS][MOVIES];
    int userScores[MOVIES];
    int closestReviewer;
    setInitialUserScores(userScores);
    readData(scores);
    userInput(scores, userScores);
    closestReviewer = getReviewer(scores, userScores);
    outputRatings(closestReviewer, userScores, scores);
    return 0;
}
void readData(int scores[][MOVIES])
//inputs data from a file into scores array
{
    ifstream inputStream;
    inputStream.open("reviews.txt");
    for (int i = 0; i < REVIEWERS; i++)
    {
        for (int index2 = 0; index2 < MOVIES; index2++)
        {
            inputStream >> scores[i][index2];
        }
    }
    return;
}
void userInput(int scores[][MOVIES], int userScores[MOVIES])
//user inputs three scores for user specified movies
{
    int movie;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the movie number you'd like to review: ";
        cin >> movie;
        cout << "Enter the review score: ";
        cin >> userScores[movie];
    }
    return;
}
void setInitialUserScores(int userScores[])
//sets all values in userScores to -1 as default
{
    for (int i = 0; i < MOVIES; i++)
    {
        userScores[i] = -1;
    }
    return;
}
int getReviewer(int scores[][MOVIES], int userScores[])
//determines reviewer with closest scores to user inputted scores
{
    int reviewerCloseness;
    int closeness = 1000;
    int closestReviewer;
    for (int i = 0; i < REVIEWERS; i++)
    {
        reviewerCloseness = calculateCloseness(userScores, scores, i);
        if (reviewerCloseness < closestReviewer)
        {
            closestReviewer = i;
            closeness = reviewerCloseness;
        }
    }
    return closestReviewer;
}
void outputRatings(int closestReviewer, int userScores[], int scores[][MOVIES])
//outputs ratings of closestReviewer of movies user did not score
{
    for (int i = 0; i < MOVIES; i++)
    {
        if (userScores[i] < 0)
        {
            cout << "For movie " << i << " we predict a rating of " << scores[closestReviewer][i] << endl;
        }
    }
    return;
}
int calculateCloseness(int userScores[], int scores[][MOVIES], int index)
//calculates the closeness of reviewer index by comparing scores to scores given by user
{
    int distance = 0;
    for (int i = 0; i < MOVIES; i++)
    {
        if (userScores[i] > -1)
        {
            distance += pow(userScores[i] - scores[index][i], 2);
        }
    }
    return distance;
}