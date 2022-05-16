class retirement
{
public:
    retirement(int = 0, int = 0, double = 0.0, double = 0.0);
    double totalAccumulated() const;
    double ammountToDeposit(double goal, int yearsToGoal);

private:
    double amountDeposited;
    int compoundPerYear;
    double percentInterested;
    int years;
};