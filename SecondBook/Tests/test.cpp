#include <iostream>
using namespace std;

class clockType
{
    public:
        void setTime(int, int, int);
        void getTime(int&, int&, int&) const;
        void printTime() const;
        void incrementSeconds();
        void incrementMinutes();
        void incrementHours();
        bool equalTime(const clockType&) const;

    private:
        int hr;
        int min;
        int sec;
};

int main()
{
    clockType myClock;
    clockType yourClock;

    int hours;
    int minutes;
    int seconds;

    myClock.setTime(5, 4, 30);

    cout << "Line 2: myClock: ";
    myClock.printTime();
    cout << endl;

    cout << "Line 5: yourClock: ";
    yourClock.printTime();
    cout << endl;

    yourClock.setTime(5. 45, 26);

    cout << "Line 9: After setting, yourClock: ";
    yourClock.printTime();
    cout << endl;

    if (myClock.equalTime(yourClock))
        cout << "Line 13: Both times are equal." << endl;
    else
        cout << "Line 15: The two times are not equal." << endl;

    cout << "Line 16: Enter the hours, minutes, and " << "seconds: ";
    cin >> hours >> minutes >> seconds;
    cout << endl;
}