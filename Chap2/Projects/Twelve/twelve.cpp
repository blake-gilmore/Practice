#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    double one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = 0;
    char leadingDigit;
    int count = 0;

    string strNum;

    ifstream inputStream;
    inputStream.open("names.txt");

    while (inputStream >> strNum)
    {
        leadingDigit = strNum[0];


        if (leadingDigit == '1')
            one++;
        else if (leadingDigit == '2')
            two++;
        else if (leadingDigit == '3')
            three++;
        else if (leadingDigit == '4')
            four++;
        else if (leadingDigit == '5')
            five++;
        else if (leadingDigit == '6')
            six++;
        else if (leadingDigit == '7')
            seven++;
        else if (leadingDigit == '8')
            eight++;
        else if (leadingDigit == '9')
            nine++;

        count++;
    }

    double onePercent, twoPercent, threePercent, fourPercent, fivePercent, sixPercent, sevenPercent, eightPercent, ninePercent;

    onePercent = (one / count) * 100;
    twoPercent = (two / count) * 100;
    threePercent = (three / count) * 100;
    fourPercent = (four / count) * 100;
    fivePercent = (five / count) * 100;
    sixPercent = (six / count) * 100;
    sevenPercent = (seven / count) * 100;
    eightPercent = (eight / count) * 100;
    ninePercent = (nine / count) * 100;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "1: %" << onePercent << endl;
    cout << "2: %" << twoPercent << endl;
    cout << "3: %" << threePercent << endl;
    cout << "4: %" << fourPercent << endl;
    cout << "5: %" << fivePercent << endl;
    cout << "6: %" << sixPercent << endl;
    cout << "7: %" << sevenPercent << endl;
    cout << "8: %" << eightPercent << endl;
    cout << "9: %" << ninePercent << endl;

    return 0;
}