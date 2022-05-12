#include <string>
using namespace std;
class employee
{
public:
    employee();
    employee(string, int, double);
    employee(int, double);
    employee(string);

    void setData(string, int, double);
    void print() const;
    void updateSalary(double x);
    int getNumOfServiceYears() const;
    double getSalary() const;

private:
    string name;
    int numOfServiceYears;
    double salary;
};