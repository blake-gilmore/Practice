
#include <string>
class largeIntegers
{
public:
    largeIntegers();
    const char* getInteger() const;
    void setInteger(std::string);
    void addIntegers(largeIntegers&, largeIntegers&);
    void subtractIntegers(largeIntegers&, largeIntegers&);
    void multiplyIntegers(largeIntegers&, largeIntegers&);
    int getLength();
    bool compareIntegers(std::string);
    ~largeIntegers();

private:
    char* largeInt;
    int lengthOfInteger;
}