#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ifstream firstPass, secondPass;
    firstPass.open("studentAnswers.txt");
    secondPass.open("studentAnswers.txt");
    std::string tempString;
    int counter;


    char* answerKey = new char[20];
    for (int i = 0; i < 20; i++)
    {
        answerKey[i] = secondPass.get();
    }
    secondPass.get();
    char** studentGrades;
    std::cout << "Enter number of student scores: ";
    std::cin >> counter;
    int* points = new int[counter];
    studentGrades = new char*[counter];

    for (int i = 0; i < counter; i++)
    {
        points[i] = 0;
        studentGrades[i] = new char[29];
        for (int j = 0; j < 29; j++)
        {

            studentGrades[i][j] = secondPass.get();
            if (j >= 9)
            {
                if (studentGrades[i][j] == answerKey[j-9])
                    points[i]+=2;
                else if (studentGrades[i][j] != ' ')
                    points[i]-=1;
            }
        }
        secondPass.get();
    }
    double percentage;
    for (int i = 0; i < counter; i++)
    {
        for (int j = 0; j < 29; j++)
        {
            std::cout << studentGrades[i][j];
        }
        std::cout << " " << points[i] << "/40  ";
        if (points[i] < 0)
            std::cout << "0";
        else
            std::cout << (points[i]/40.0) * 100;

        std::cout << "%\n";
    }
    delete[] answerKey;
    delete[] points;
    for (int i = 0; i < counter; i++)
    {
        delete[] (studentGrades[i]);
    }
    delete[] studentGrades;
    
    return 0;
}