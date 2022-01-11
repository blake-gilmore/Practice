#include <iostream>
#include <string>
bool isLetter(char value);
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;
    int selection, counter(0);
    string phrase, translatedPhrase;
    do
    {
        cout << "1. Enter new phrase. 2. Quit." << endl;
        cin >> selection;
        if (selection == 1)
        {
            cout << "Enter a phrase you want replaced" << endl;
            cin.ignore(1000, '\n');
            getline(cin, phrase);
            phrase.push_back('\n');
            for (int i = 0; i < phrase.length(); i++)
            {
                if (isLetter(phrase[i]))
                    counter++;
                else if (counter == 4)
                {
                    if (isupper(phrase[i - 4]))
                        phrase[i - 4] = 'L';
                    else
                        phrase[i - 4] = 'l';
                    phrase[i - 3] = 'o';
                    phrase[i-2] = 'v';
                    phrase[i - 1] = 'e';
                    counter = 0;
                }
                else
                    counter = 0;
            }
            cout << phrase;
        }
    } while (selection !=2);
    return 0;
}

bool isLetter(char value)
{
    if ((value >= 65 && value <= 90) || (value >= 97 && value <= 122))
        return true;
    else   
        return false;
}