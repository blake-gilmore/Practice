#include <iostream>
using namespace std;

int main()
{
    int cookie, cPerbox, bPercontainer;
    int totalContainers, totalBoxes;
    int remainder;

    cout << "Enter number of cookies total, number of cookies perbox, number of boxes per container: ";
    cin >> cookie >>cPerbox >> bPercontainer;
    totalBoxes = cookie / cPerbox;
    remainder = cookie % cPerbox;

    cout << remainder << " cookies remaining. ";

    totalContainers = totalBoxes / bPercontainer;
    remainder = cookie % cPerbox;

    cout << remainder << " boxes remaining.";

    cout << endl << cookie << "Cookies equals " << totalBoxes << " boxes and " << totalContainers << " containers.\n";

    return 0;
}