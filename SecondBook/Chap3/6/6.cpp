#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    using std::string;
    using std::cout;
    using std::cin;
    using std::endl;
    using std::getline;
    string one, two, three;
    cout << "Enter line for the string: ";

    getline(cin, one);
    getline(cin, two);
    getline(cin, three);

    cout << one << two << three << endl;
    cout << one << three << two << endl;
    cout << two << one << three << endl;
    cout << two << three << one << endl;
    cout << three << one << two << endl;
    cout << three << two << one << endl;

    return 0;
    
}