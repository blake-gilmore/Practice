#include <iostream>
#include "8b.h"
void showSelection();

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    
    int choice;
    showSelection();
    cin >> choice;
    employee myEmployee;

    string tempName;
    int tempYears;
    double tempSalary;

    while (choice != 9)
    {
        switch (choice)
        {
        case 1:
            myEmployee.print();
            break;
        case 2:
            cout << "Enter name: ";
            cin >> tempName;
            cout << "Enter years: ";
            cin >> tempYears;
            cout << "Enter salary: ";
            cin >> tempSalary;
            myEmployee.setData(tempName, tempYears, tempSalary);
            break;
        case 3:
            cout << "How much do you want to add to the salary?";
            cin >> tempSalary;
            myEmployee.updateSalary(tempSalary);
            break;
        case 4: 
            cout << "Number of service years is " << myEmployee.getNumOfServiceYears() << endl;
            break;
        case 5:
            cout << "Salary is $" << myEmployee.getSalary() << endl;
            break;
        default :
            cout << "Invalid selection." << endl;
        }

        showSelection();
        cin >> choice;
    }

    return 0;
}
void showSelection()
{
    using std::cout;
    using std::endl;
    cout << "1: Print data" << endl;
    cout << "2: Setup employee data" << endl;
    cout << "3: Update Salary" << endl;
    cout << "4: Get Service Years" << endl;
    cout << "5: Get Salary" << endl;
    cout << "9 to exit" << endl;
}