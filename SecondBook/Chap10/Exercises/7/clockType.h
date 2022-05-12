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


    clockType(int = 0, int = 0, int = 0);

private:
    int seconds, minutes, hours;
    void setClock(int, int, int);
};