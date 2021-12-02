#include <iostream>
using namespace std;
int calculateDifference(int startTime, int endTime);
int calculateHourDifference(int startTime, int endTime);
int calculateMinuteDifference(int startTime, int endTime);
int main()
{
    int startTime, endTime, minutesDifference;

    cout << "Enter start time: ";
    cin >> startTime;
    cout << "Enter end time: ";
    cin >> endTime;

    minutesDifference = calculateDifference(startTime, endTime);
    cout << "The difference is " << minutesDifference << endl;
    return 0;
}

int calculateDifference(int startTime, int endTime)
{
    int hourDifference = calculateHourDifference(startTime, endTime);
    int minutesDifference = calculateMinuteDifference(startTime, endTime);
    int totalMinutes = hourDifference * 60 + minutesDifference;

    return totalMinutes;
}
int calculateHourDifference(int startTime, int endTime)
{
    int firstHour = startTime / 100;
    int lastHour = endTime / 100;
    int hourDifference;
    if (firstHour > lastHour)
    {
        hourDifference = (24 - firstHour) + lastHour;
    }
    else
        hourDifference = lastHour - firstHour;

    return hourDifference;
}
int calculateMinuteDifference(int startTime, int endTime)
{
    int firstMinutes = startTime - ((startTime / 100) * 100);
    int lastMinutes = endTime - ((endTime / 100) * 100);

    return (lastMinutes - firstMinutes);
}