#include <iostream>
using namespace std;

class CounterType
{
public:
    void setCount(int num);
    void increaseCount();
    void decreaseCount();
    int getCount();
    void outputCount();
private:
    int count;
};
void printMenu();
int main()
{
    char selection;
    int num;
    CounterType count;
    count.setCount(0);
    
    do
    {
        printMenu();
        cin >> selection;
        switch (selection)
        {
            case 'A':
                cout << "Enter a number to set the count to.";
                cin >> num;
                count.setCount(num);
                break;
            case 'B':
                count.increaseCount();
                break;
            case 'C':
                count.decreaseCount();
                break;
            case 'D':
                count.outputCount();
                break;
            case 'E':
                cout << "Count squared is " << count.getCount() * count.getCount() << endl;
                break;
                
        }
    } while (selection != 'F');
    
}
void printMenu()
{
    cout << "A. Set Count\n"
    << "B. Increase Count By One\n"
    << "C. Decrease Count By One\n"
    << "D. Output Count\n"
    << "E. See Count Squared\n"
    << "F. End Program\n";
    return;
}

void CounterType::setCount(int num)
{
    if (num < 0)
    {
        cout << "Cannot set count to a negative number.";
        return;
    }
    else
        count = num;
    return;
}
void CounterType::increaseCount()
{
    count++;
    return;
}
void CounterType::decreaseCount()
{
    if ((count - 1) < 0)
    {
        cout << "Cannot decrease count by one, number will become negative.";
        return;
    }
    else
        count--;
    return;
}
int CounterType::getCount()
{
    return count;
}
void CounterType::outputCount()
{
    cout << "Count is currently at " << count << endl;
    return;
}