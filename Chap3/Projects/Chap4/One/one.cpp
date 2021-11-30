#include <iostream>
using namespace std;

void input(int& num1, int& num2);
int conversion(char& time, int num1);
void output (int num2, int convertedNum1, char time);

int main()
{
    int num1, num2, convertedNum1;
    char time, cont;

    do
    {
        input(num1, num2);
        convertedNum1 = conversion(time, num1);
        output(num2, convertedNum1, time);

        cout << "Would you like to input another time? (y/n): ";
        cin >> cont;
    } while (cont == 'y');
    

    return 0;
}

void input(int& num1, int& num2)
//Precondition: Num1 and Num2 are any integer variable
//Function collects two inputs from user and overwrites num1 and num2 to represent hours and minutes of a 24 hour clock
{
    cout << "Enter the hour of a 24 hour time: ";
    cin >> num1;
    cout << "Enter the minutes of a 24 hour time: ";
    cin >> num2;
    return;
}
int conversion(char& time, int num1)
//Precondition: Time is any character variable, num1 is a positive integer between 0 and 23, convertedNum1 is any integer variable
//Postcondition: Returns an integer as the 12 hour clock version of num1 and changes time to either 'a' or 'p' for the time of day
{
    if (num1 == 0)
    {
        time = 'a';
        return 12;
    }
    else if (num1 >0 && num1 < 12)
    {
        time = 'a';
        return num1;
    }
    else if (num1 == 12)
    {
        time = 'p';
        return num1;
    }
    else
    {
        time = 'p';
        return num1 - 12;
    }
}
void output (int num2, int convertedNum1, char time)
//Precondition: num1 is a positive integer between 1 and 12, num2 is a positive integer between 0 and 59, converted
{
    cout << "Your time is " << convertedNum1 << ":" << num2 << " ";
    if (time == 'a')
    {
        cout << "A.M.";
    }
    else
    {
        cout << "P.M.";
    }
    cout << endl;
    
}
