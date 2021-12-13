#include <iostream>
#include <fstream>
using namespace std;
void getHighScore(string names[], int scores[]);
void pushScores(int num, int nextScore, int scores[], string names[], string nextName);

int main()
{
    string names[3];
    int scores[3] = {0,0,0};

    getHighScore(names, scores);
    for (int i = 0; i < 3; i++)
    {
        cout << i+1 << ":" << names[i] << " " << scores[i] << endl;
    }
    return 0;
}
void getHighScore(string names[], int scores[])
{
    ifstream inputStream;
    inputStream.open("scores.txt");
    string nextName;
    int nextScore(0);

    while (inputStream >> nextName)
    {
        inputStream >> nextScore;
        if (nextScore > scores[0])
        {
            pushScores(0, nextScore, scores, names, nextName);
        }
        else if (nextScore > scores[1])
        {
            pushScores(1, nextScore, scores, names, nextName);
        }
        else if (nextScore > scores[2])
        {
            scores[2] = nextScore;
            names[2] = nextName;
        }
    }
    inputStream.close();
    return;
}
void pushScores(int num, int nextScore, int scores[], string names[], string nextName)
{
    for (int i = 2; i > num; i--)
    {
        scores[i] = scores[i-1];
        names[i] = names[i-1];
    }
    scores[num] = nextScore;
    names[num] = nextName;
    return;
}