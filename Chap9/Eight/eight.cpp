#include <iostream>
#include <string>
void turnPig(std::string input);
bool isConsonant(char in);
int main()
{
    using std::string;
    using std::cout;
    using std::cin;
    using std::endl;

    string input;

    cout << "Enter the sentence you would like turned to pig latin." << endl;
    getline(cin, input);
    input.push_back('\n');

    turnPig(input);
    return 0;
}
void turnPig(std::string input)
{
    using std::cout;
    using std::string;
    using std::endl;

    int count(0);

    for (int i = 0; i < input.length(); i++)
    {
        if ((input[i] == ' ' || input[i] == '\n') && count > 0)
        {
            if (isConsonant(input[i - count]))
            {
                for (int j = count - 1; j  > 0; j--)
                {
                    cout << input[i-j];
                }
                cout <<input[i - count] << "ay";
                count = 0;
            }
            else 
            {
                for (int j = count; j > 0; j--)
                {
                    cout << input[i-j];
                }
                cout << "way";
                count = 0;
            }
            cout << input[i];
        }
        else if (input[i] != ' ')
        {
            count++;
        }
        else
        {
            cout << input[i];
        }
    }
    return;
}
bool isConsonant(char in)
{
    if (in == 'a' || in == 'e' || in == 'i' || in == 'o' || in == 'u')
        return false;
    else
        return true;
}