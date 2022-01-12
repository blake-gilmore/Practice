#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include "salariedemployee.h"
#include "employee.h"
#include <string>
using std::string;
namespace SavitchEmployees
{
    class Administrator: public SalariedEmployee
    {
        public:
            Administrator();
            Administrator(const string& newAdminTitle, const string& newResponsibility, const string& newSupervisor);
            void setSupervisor(const string& newSupervisor);
            void setAdmin();
            void outputAdmin() const;
            void printCheck();
        protected:
            string adminTitle;
            string responsibility;
            string supervisor;
    };
}
#endif