#include <iostream>
using namespace std;
void simplify(int& num, int& denom);
int findCommon(int num, int denom, bool& isSimplified);
int main()
{
    int num, denom;
    cout << "Enter the numerator: ";
    cin >> num;
    cout << "Enter the denominator: ";
    cin >> denom;

    simplify(num, denom);

    cout << "The simplified numerator is " << num << "/" << denom << endl;
}

void simplify(int& num, int& denom)
{
    int common;
    bool isSimplified = false;
    do
    {
        common = findCommon(num, denom, isSimplified);
        if (isSimplified)
        {
            num /= common;
            denom /= common;
        }
    } while (isSimplified);

    return;
}

int findCommon(int num, int denom, bool& isSimplified)
{
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0 && denom % i == 0)
        {
            isSimplified = true;
            return i;
        }
    }

    isSimplified = false;
    return 0;
}