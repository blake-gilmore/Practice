#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
const int MOVIES = 6;
const int REVIEWERS = 1000;
const int USER = 3;
void readData(int scores[][MOVIES], int sizeOfScores);
void userInput(int scores[][MOVIES], int userScores[MOVIES]);
void setInitialUserScores(int userScores[]);
int getReviewer(int scores[][MOVIES], int userScores[], int sizeOfScores);
void outputRatings(int closestReviewer, int userScores[], int scores[][MOVIES]);
int calculateCloseness(int userScores[], int scores[][MOVIES], int index);
int main()
{
    int scores[REVIEWERS][MOVIES];
    int userScores[MOVIES];
    int closestReviewer;
    int sizeOfScores;
    setInitialUserScores(userScores);
    readData(scores, sizeOfScores);
    userInput(scores, userScores);
    closestReviewer = getReviewer(scores, userScores, sizeOfScores);
    outputRatings(closestReviewer, userScores, scores);
    return 0;
}
void readData(int scores[][MOVIES], int sizeOfScores)
//inputs data from a file into scores array
{
    sizeOfScores = 0;
    int next, index(0);
    ifstream inputStream;
    inputStream.open("reviews.txt");

    while (inputStream >> next);
    {
        for (int index2 = 0; index2 < MOVIES; index2++)
        {
            inputStream >> scores[index][index2];
        }
        index++;
    }
    sizeOfScores = index;
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
int getReviewer(int scores[][MOVIES], int userScores[], int sizeOfScores)
//determines reviewer with closest scores to user inputted scores
{
    int reviewerCloseness;
    int closeness = 1000;
    int closestReviewer;
    for (int i = 0; i < sizeOfScores; i++)
    {
        reviewerCloseness = calculateCloseness(userScores, scores, i);
        if (reviewerCloseness < closeness)
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
    cout << closestReviewer;
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