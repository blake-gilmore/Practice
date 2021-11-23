#include <iostream>
using namespace std;

void heightCalc(char gender, int momHeight, int dadHeight);
int main()
{
    char gender, again;
    int momHeight, dadHeight;
    int tempFeet, tempInches;

    do
    {
        cout << "Enter the child's Gender. M for Male and F for Female: ";
        do
        {
            cin >> gender;

            if (gender != 'M' && gender != 'F')
                cout << "Invalid input.\nEnter the child's Gender. M for male and F for female: ";

        } while (gender != 'M' && gender != 'F');

        cout << "Enter the father's height in feet and inches: ";
        cin >> tempFeet >> tempInches;
        dadHeight = (tempFeet * 12) + tempInches;

        cout << "Enter the mother's height in feet and inches: ";
        cin >> tempFeet >> tempInches;
        momHeight = (tempFeet * 12) + tempInches;

        heightCalc(gender, momHeight, dadHeight);

        cout << "Would you like to compute another child's height? (Y/N)";
        cin >> again;
        
    } while (again != 'N');

    return 0;
    
}

void heightCalc(char gender, int momHeight, int dadHeight)
{
    int childHeight;

    switch(gender)
    {
        case 'M':
        {
            childHeight = ((momHeight * (13.0/12.0)) + dadHeight) / 2;
            break;
        }
        case 'F':
        {   
            childHeight = ((dadHeight * (12.0/13.0) + momHeight) / 2);
            break;
        }
    }

    cout << "The child will be " << childHeight / 12 << " feet and " << childHeight % 12 << " inches tall.\n";
    return;
}
