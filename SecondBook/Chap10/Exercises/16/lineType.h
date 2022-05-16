class lineType
{
public:
    //constructor for all values. Initializes all to 0
    lineType(double = 0.0, double = 0.0, double = 0.0);

    //Precondition: Values a, b, and c should be initialized beforehand
    //Postcondition: returns -a/b if b!=0
    double getSlope() const;

    //Precondition: lineType parameter is an initialized lineType
    //Postcondition: returns true if lines are equal. False if not.
    bool isEqual(lineType&) const;

    //Precondition: &lineType parameter and calling lineType are initialized lineType
    //Postcondition: Returns true if their slopes are the same. Returns false if otherwise
    bool isParallel(lineType&) const;

    //Precondition: &lineType parameter and calling lineType are initialized
    //lineTypes
    //Postcondition: returns true if the product of both lines' slopes is -1.
    //returns false if otherwise
    bool isPerpendicular(lineType&) const;

    //Precondition: lineType parameter and calling lineType are initialized lineTypes
    //where they are not parallel
    //Postcondition: Prints the x and y values of the intersection. Prints invalid if
    //they are parallel
    void findIntersection(lineType&) const;

    double getA() const {return a;}
    double getB() const {return b;}
    double getC() const {return c;}
private:
    double a;
    double b;
    double c;
};