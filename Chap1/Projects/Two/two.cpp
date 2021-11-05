#include <iostream>
using namespace std;

int main()
{
    double mouseKill;
    double mouseWeight;
    double humanWeight;
    const double inSoda (.001);
    double oneSoda = inSoda * 8;



    cout << "Input the amount of sweetener needed to kill a mouse: ";
    cin >> mouseKill;

    cout << "Input the weight of the mouse killed: ";
    cin >> mouseWeight;

    cout << "Input the weight of the human goal: ";
    cin >> humanWeight;

    double sodas = mouseKill / oneSoda;
    double perPound = sodas / mouseWeight;
    double humanKill = humanWeight * perPound;

    cout << "A human weighing " << humanWeight << " pounds will have to drink " << humanKill << " sodas to die from the artificial sweetener\n";

    return 0;
}