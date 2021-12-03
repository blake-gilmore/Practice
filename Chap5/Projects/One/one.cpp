#include <iostream>
using namespace std;
void inputAverages(string monthNames[], int size, int avgRain[]);
int findMonthNumber(string currentMonth, string monthNames[], int size);
void inputPreviousMonths(int actualRain[12], int size, int monthNumber, string monthNames[]);
int previousNumber (int i, int monthNumber);
void outputTable(int avgRain[], int actualRain[], int size, int monthNumber, string monthNames[]);
void outputAvgDiff(int avg, int actual);
void outputGraph(int avgRain[], int actualRain[], int size, int monthNumber, string monthNames[]);

int main()
{
    string currentMonth;
    int size = 12, monthNumber, choice;
    int avgRain[12], actualRain[12];
    string monthNames[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    inputAverages(monthNames, size, avgRain);
    cout << "What's the current month?";
    cin >> currentMonth;
    monthNumber = findMonthNumber(currentMonth, monthNames, size);
    inputPreviousMonths(actualRain, size, monthNumber, monthNames);

    cout << "Would you like to see the table or the bar graph?(1/2): ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            outputTable(avgRain, actualRain, size, monthNumber, monthNames);
            break;
        case 2:
            outputGraph(avgRain, actualRain, size, monthNumber, monthNames);
            break;
    }
    return 0;
}

void inputAverages(string monthNames[], int size, int avgRain[])
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the average monthly rain of " << monthNames[i] << ": ";
        cin >> avgRain[i];
    }
    return;
}

int findMonthNumber(string currentMonth, string monthNames[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (currentMonth == monthNames[i])
        {
            return i;
        }
    }
    return 0;
}

void inputPreviousMonths(int actualRain[], int size, int monthNumber, string monthNames[])
{
    int properValue;
    for ( int i = 0; i < 12; i++)
    {
        properValue = previousNumber(i, monthNumber);
        cout << "Enter the rain from the previous " << monthNames[properValue] << ": ";
        cin >> actualRain[properValue];
    }
    return;
}
int previousNumber (int i, int monthNumber)
{
    if ((monthNumber + i) > 11)
        return ((monthNumber + i) - 12);
    else
        return monthNumber + i;
}

void outputTable(int avgRain[], int actualRain[], int size, int monthNumber, string monthNames[])
{
    int properValue;
    cout << "Month\t|\tLast Year's Rain\t|\tDifference From Average" << endl
    << "_____________________________________________________________________\n";
    for (int i = 0; i < size; i++)
    {
        properValue = previousNumber(i, monthNumber);
        cout << monthNames[properValue] << "\t|\t" << actualRain[properValue] << "\t|\t";
        outputAvgDiff(avgRain[properValue], actualRain[properValue]);
        cout << endl
        << "_____________________________________________________________________\n";
    }
}

void outputAvgDiff(int avg, int actual)
{
    if (avg > actual)
    {
        cout << (avg - actual) << " below avg";
    }
    else if (avg < actual)
    {
        cout << (actual - avg) << " above avg";
    }
    else
    {
        cout << "Same as avg";
    }

    return;
}

void outputGraph(int avgRain[], int actualRain[], int size, int monthNumber, string monthNames[])
{
    int properValue;
    for (int i = 0; i < 12; i++)
    {
        properValue = previousNumber(i, monthNumber);
        cout << "Average " << monthNames[properValue] << ":";
        for (int j = 0; j < (avgRain[properValue]); j++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "Last " << monthNames[properValue] << ":";
        for (int j = 0; j < (actualRain[properValue]); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return;
}
