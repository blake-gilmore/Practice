#include <iostream>
using namespace std;
void echo(int a[][5], int num);
int main()
{
    int a[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
        
    }
    echo(a, 4);
    return 0;
}

void echo(int a[][5], int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}