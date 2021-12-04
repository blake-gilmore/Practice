#include <iostream>
using namespace std;
const int SIZE = 100;
void fillArray(int list[], int size, int count[], int& numFilled);
void outputGrades(int count[]);

int main()
{
    int list[SIZE], numFilled, count[6] = {0,0,0,0,0,0};
    cout << "Enter a list of student grades, enter -1 to end: ";
    fillArray(list, SIZE, count, numFilled);
    outputGrades(count);
    return 0;
}
void fillArray(int list[], int size, int count[], int& numFilled)
{
    int index(0), next;
    cin >> next;
    while (next > 0 && index < size)
    {
        list[index] = next;
        index++;
        count[next]++;
        cin >> next;
    }
    return;
}
void outputGrades(int count[])
{
    for (int i = 0; i < 6; i++)
    {
        cout << count[i] << " grades of " << i << endl;
    }
    return;
}