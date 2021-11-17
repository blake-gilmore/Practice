#include <iostream>
#include <cstdlib>

using namespace std;

int diceSum();

int main()
{
    srand(5);
    int point;
    long int win(0), lose(0);
    int dice;
    double probability;
    for (long int i = 1; i <= 10000; i++)
    {
        point = diceSum();

        if (point == 7 || point == 11)
        {
            win++;
        }
        else if (point == 2 || point == 3 || point == 12)
        {
            lose++;
        }
        else
        {
            do
            {
                dice = diceSum();
            } while (dice != 7 && dice != point);

            if (dice == 7)
                lose++;
            else
                win++;
        }
    }
    cout << win << "   " << lose << endl << endl;
    probability = (win / (static_cast<double>(win)+lose)) * 100;
    cout << "The probability of you winning over 10,000 games is %" << probability << endl;

    if (probability > 50)
        cout << "You'd come out on top!";

    else
        cout << "The house always wins.";

    cout << endl;

    return 0;
}

int diceSum()
{
    int sum;
    sum = ((rand() % 5) + 1) + ((rand() % 5) + 1);
    return sum;
}