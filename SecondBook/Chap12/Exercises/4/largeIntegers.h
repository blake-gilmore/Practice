
#include <string>
class largeIntegers
{
public:
    largeIntegers();
    const int* getInteger() const;
    void setInteger(std::string);
    void addIntegers(largeIntegers&, largeIntegers&);
    void subtractIntegers(largeIntegers&, largeIntegers&);
    void multiplyIntegers(largeIntegers&, largeIntegers&);
    int getLength();
    void print() const;
    bool compareIntegers(std::string);
    ~largeIntegers();
    bool isSmaller(largeIntegers&);

private:
    int* largeInt;
    int lengthOfInteger;
};