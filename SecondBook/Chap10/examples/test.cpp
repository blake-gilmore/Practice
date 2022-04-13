

class   clockType
{
    public:
        void setTime(int, int, int);
        void getTime(int&, int&, int&) const;
        void printTime() const;
        void incrementSeconds();
        void incrementMinutes();
        void incrementHours();
        bool equalTime(const clockType&) const;

    private:
        int hr;
        int min;
        int sec;
};

//Declaring a class object
clockType myClock;
clockType yourClock;

myClock.setTime(5,2,30);
myClock.printTime();
yourClock.setTime(x,y,z);

if (myClock.equalTime(yourClock))
...