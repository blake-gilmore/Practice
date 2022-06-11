#include <string>
#include <iostream>
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
    dayType operator++(int);
    dayType operator++();
    dayType operator--(int);
    dayType operator--();
    bool operator ==(const dayType&) const;
    bool operator !=(const dayType&) const;
    std::ostream& operator <<(const std::ostream& os);
    std::istream& operator >>(const std::istream& is);
    


private:
    string dayOfWeek;
    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

};