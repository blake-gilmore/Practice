#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;
class Trivia
{
public:
    Trivia();
    Trivia(string q, string a, int num);
    void setQuestion(string q, string a, int num);
    string getQuestion() const;
    string getAnswer() const;
    int getScore() const;
    
private:
    string question;
    string answer;
    int cashAmount;
};
int main()
{
    vector <Trivia> questions(5);
    string q[5];
    string a[5];
    string input;
    int score(0);
    int n[5];
    q[0] = "Mom's name?";
    a[0] = "Cathy";
    n[0] = 10;
    q[1] = "2 plus 2?";
    a[1] = "4";
    n[1] = 1000;
    q[2] = "What holiday just passed?";
    a[2] = "Christmas";
    n[2] = 25;
    q[3] = "Home street?";
    a[3] = "Cornet";
    n[3] = 50;
    q[4] = "Your birthday?";
    a[4] = "February 29th";
    n[4] = 5000;

    for (int i = 0; i < 5; i++)
    {
        questions[i].setQuestion(q[i], a[i], n[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << questions[i].getQuestion() << endl;
        getline(cin, input);
        if (input == questions[i].getAnswer())
        {
            score+=questions[i].getScore();
            cout << "Correct!" << endl;
        }
        else
            cout << "Wrong answer." << endl;
    }

    cout << "Your score is " << score << endl << endl;
    return 0;
}

void Trivia::setQuestion(string q, string a, int num)
{
    question = q;
    answer = a;
    cashAmount = num;
}
Trivia::Trivia()
{

}
Trivia::Trivia(string q, string a, int num)
{
    question = q; 
    answer = a;
    cashAmount = num;
}
string Trivia::getQuestion() const
{
    return question;
}
string Trivia::getAnswer() const
{
    return answer;
}
int Trivia::getScore() const
{
    return cashAmount;
}