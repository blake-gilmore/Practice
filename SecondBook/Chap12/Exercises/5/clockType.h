/*
Extend the definition of the class clockType by overloading
the post-increment operator function as a member of the class
clockType.
b. Write the definition of the function to overload the post-increment
operator for the class clockType as defined in part a.
*/

class clockType
{
public:
    void setSeconds(int);
    void setMinutes(int);
    void setHour(int);
    int getSeconds() const;
    int getMinutes() const;
    int getHour() const;
    int secondsElapsed() const;
    int remainingTime() const;
    void compareClocks(clockType&) const;
    clockType operator++(int);

    clockType(int = 0, int = 0, int = 0);

private:
    int seconds, minutes, hours;
    void setClock(int, int, int);
};