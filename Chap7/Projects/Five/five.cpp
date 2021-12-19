#include <iostream>
#include <vector>
using namespace std;
void countUpThree(vector<int>& suitors, int& index);
int main()
{
    int selection, index(0);
    cout << "Enter the number of suitors there are: ";
    cin >> selection;
    vector <int>suitors(selection);
    for (int i = 0; i < selection; i++)
        suitors[i] = i + 1;
        
    do
    {
        countUpThree(suitors, index);
        suitors.erase(suitors.begin() + index);
        if (index > (suitors.size() - 1))
            index = 0;
        cout << suitors.size() << endl;
    } while (suitors.size() > 1);
    cout << "If you have " << selection << " suitors, then you would want to be position " << suitors[0];
    
    return 0;
}
void countUpThree(vector<int>& suitors, int& index)
{
    for (int i = 0; i < 2; i++)
    {
        if (index == (suitors.size() - 1))
            index = 0;
        else
            index++;
    }
    return;
}
