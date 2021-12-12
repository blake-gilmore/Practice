#include <iostream>
using namespace std;
const int MAXCOLUMN = 50;
void outputData(int plants[]);
int findMaxThousands(int plants[]);
void initData(char data[][4], int plants[], int max);

int main()
{
    int plants[4];
    double data, sum(0);
    cout << "Enter the data for each plant, enter a negative number when the data is done: ";
    for (int i = 0; i < 4; i++)
    {
        while (data >= 0)
        {
            sum+=data;
            cin >> data;
        }
        plants[i] = sum;
        sum = 0;
        data = 0;
    }
    outputData(plants);
    return 0;
}
void outputData(int plants[])
{
    char data[MAXCOLUMN][4];
    int max = findMaxThousands(plants);
    initData(data, plants, max);
    for (int i = max - 1; i >= 0; i--)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
    cout << "1 2 3 4\n";
    return;
}
void initData(char data[][4], int plants[], int max)
{
    for (int i = 1; i <= max; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if ((plants[j] / (1000 * i)) > 0)
            {
                data[i - 1][j] = '*';
            }
            else
                data[i - 1][j] = ' ';
        }
    }
}
int findMaxThousands(int plants[])
{
    int max = 0;
    for (int i = 0; i < 4; i++)
    {
        if ((plants[i] / 1000) > max)
        {
            max = plants[i] / 1000;
        }
    }
    return max;
}
