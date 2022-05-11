class clockType
{
public:
    void setSeconds(int);
    void setMinutes(int);
    void setHour(int);
    int getSeconds() const;
    int getMinutes() const;
    int getHour() const;

    clockType(int = 0, int = 0, int = 0);

private:
    int seconds, minutes, hours;
    void setClock(int, int, int);
};