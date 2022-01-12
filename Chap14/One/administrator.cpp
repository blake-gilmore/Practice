#include "administrator.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
namespace SavitchEmployees
{
    Administrator::Administrator(): Administrator("None", "None", "None")
    {
        //Intentionally left empty
    }
    Administrator::Administrator(const string& newAdminTitle, const string& newResponsibility, const string& newSupervisor)
    {
        adminTitle = newAdminTitle;
        responsibility = newResponsibility;
        supervisor = newSupervisor;
    }
    void Administrator::setSupervisor(const string& newSupervisor)
    {
        supervisor = newSupervisor;
    }
    void Administrator::setAdmin()
    {
        cout << "Enter the Admin Title: ";
        cin >> adminTitle;
        cout << "Enter Responsibility Title: ";
        cin >> responsibility;
        cout << "Enter the supervisor name: ";
        cin >> supervisor;
    }
    void Administrator::outputAdmin() const
    {
        cout << "The Admin name is " << adminTitle << endl
             << "The Responsibility is " << responsibility << endl
             << "The superisor is " << supervisor << endl;
    }
    void Administrator::printCheck()
    {
        setNetPay(salary);
        cout << "\n________________________________________________\n"
        << "Pay to the order of " << getName( ) << endl
        << "The sum of " << getNetPay( ) << " Dollars\n"
        << "_________________________________________________\n"
        << "Check Stub NOT NEGOTIABLE \n"
        << "Employee Number: " << getSsn( ) << endl
        << "Salaried Employee. Regular Pay: "
        << salary << endl << "_________________________________________________\n";
    }
}