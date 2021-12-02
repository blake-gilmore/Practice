#include <iostream>
using namespace std;
double convertToMPH(int minutes, int seconds);
double convertToMPH(double kph);
int main()
{
    double minutesToMPH = convertToMPH(10, 35);
    double kphToMPH = convertToMPH(13.56);

    cout << minutesToMPH << " " << kphToMPH;
    return 0;
}

double convertToMPH(int minutes, int seconds)
{
    double totalseconds = seconds + minutes*60;
    double mph = (3600 / totalseconds);
    return mph;
}
double convertToMPH(double kph)
{
    return (kph * 1.61);
}