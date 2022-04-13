#include <iostream>
#include <iomanip>

using namespace std;

/*
Algorithm
1. Get account number
2. Get service code
3. Get number of minutes the service was used
4. Determine type of service code.
5. If r,R, then regular
6. If p or P, then premium
7. Any other is an error
8. If premium, get minutes used during day and minutes at night
9. Calculate charge
    a. If regular, amountDue = 10+.20*minutes over 50
    b. If premium, amountDue = 25 + .10*minutes over 75 in morning + .05*minutes over 100 at night
8. Output account number, type of service, and number of minutes used.
9. Output amount due from user
*/
int main()
{
    long int aNum;
    char serviceCode;
    double minutesUsed, night, day;
    double tempMinutes;
    double amountDue;
    bool error(false);
    cout << "Enter account number: ";
    cin >> aNum;
    cout << "Enter service Code: ";
    cin >> serviceCode;
    cout << "Enter number of minutes used";
    cin >> minutesUsed;

    if (serviceCode == 'r' || serviceCode == 'R')
    {
        tempMinutes = minutesUsed;
        tempMinutes -= 50;
        if (tempMinutes <= 0)
            tempMinutes = 0;
        else
        amountDue = 25 + tempMinutes * .20;
    }
    else if (serviceCode == 'p' || serviceCode == 'P')
    {
        cout << "Enter number of minutes in day: ";
        cin >> day;

        cout << "Enter number of minutes at night: ";
        cin >> night;
        
        day -=75;
        if (day < 0)
            day = 0;
        amountDue = 25 + .10 * day;

        night -= 100;
        if (night < 0)
            night = 0;
        amountDue += .05 * night;
    }
    else
    {
        cout << "Error, ending program\n";
        error = true;
        return 0;
    }
    cout << showpoint << fixed << setprecision(2);
    cout << "Acct. Num: " << aNum << endl << "Service Type: " << serviceCode << endl << "Number of minutes: " << minutesUsed << endl << "Amount due: " << amountDue << endl;


    return 0;
}