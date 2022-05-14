
class swimmingPool
{
public:
    swimmingPool(double = 0, double = 0, double = 0, double  = 0.0);
    double waterNeeded();
    void addOrDrain();
    double timeToFill();
    void setSize();


private:
    double length, width, depth;
    double rateChange;
    double gallonsFilled, gallonsNeeded;
    void determineGallons();
};