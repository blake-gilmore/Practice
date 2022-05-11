#include <string>
using std::string;
class dayType
{
public:
    dayType(string = "");
    void set(string);
    void printDay() const;
    string getDay() const;
    string getPreviousDay() const;
    string getNextDay() const;
    string getByAdding(int) const;

private:
    string dayOfWeek;
    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

};