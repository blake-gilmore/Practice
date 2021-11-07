#include <iostream>
using namespace std;

int main()
{
    double roomCapacity;
    double attending;
    double exclusion;

    cout << "Please enter the maximum room capacity";
    cin >> roomCapacity;

    cout << "Please enter the number of people attending the meeting:";
    cin >> attending;

    if (roomCapacity < attending)
    {
        exclusion = attending - roomCapacity;
        cout << "You're breaking the law, you must invite " << exclusion << " less people.";
    }
    else 
    {
        cout << "You're event matches room capacity, you are good to go!";
    }

    cout << endl;
    return 0;

}