#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
class BoxOfProduce
{
public:
    string getProduce(int numAccessed);
    void setProduce(int numArray, string veggie);
    void outputBox();
private:
    string produce[3];
};
void inputFile(BoxOfProduce& box);

int main()
{
    int selection;
    string produce;
    BoxOfProduce box;
    inputFile(box);
    box.outputBox();
    cout << "Which one would you like to change 1-3: ";
    cin >> selection;
    cout << "Which produce would you like to change it to: ";
    cin >> produce;
    box.setProduce(selection - 1, produce);
    box.outputBox();
    return 0;
}
void inputFile(BoxOfProduce& box)
{
    int selection;
    string next;
    ifstream inputStream;
    for (int i = 0; i < 3; i++)
    {
        inputStream.open("produce.txt");
        selection = rand() % 6;
        for (int j = 0; j <= selection; j++)
        {
            inputStream >> next;
        }
        inputStream.close();
        box.setProduce(i, next);
    }
    return;
}
string BoxOfProduce::getProduce(int numAccessed)
{
    return produce[numAccessed];
}
void BoxOfProduce::setProduce(int numArray, string veggie)
{
    produce[numArray] = veggie;
    return;
}
void BoxOfProduce::outputBox()
{
    for (int i = 0; i < 3; i++)
    {
        cout << produce[i] << endl;
    }
    return;
}
