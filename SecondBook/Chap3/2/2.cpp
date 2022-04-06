#include <iostream>
#include <iomanip>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    
    double weight, pounds;

    cout << std::setprecision(2);
    cout << std::showpoint << std::fixed;

    cin >>weight;

    pounds = weight*2.2;

    cout << weight << " in pounds is " << pounds << "lbs\n";

    return 0;

}