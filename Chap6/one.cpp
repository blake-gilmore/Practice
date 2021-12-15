#include <iostream>
using namespace std;
const int TOTAL_SCORE = 200;
struct StudentScore
{
    double quiz[2];
    double midterm, finalExam, numericScore;
    char letterGrade;
    double normalizedQuiz, normalizedMidterm;
    double totalPercentage;
};

void calculateLetterGrade(StudentScore& student);
int main()
{
    StudentScore student;

    cout << "Enter the first quiz grade: ";
    cin >> student.quiz[0];
    cout << "Enter the second quiz grade: ";
    cin >> student.quiz[1];

    cout << "Enter the midterm points earned";
    cin >> student.midterm;

    cout << "Enter the Final Exam grade: ";
    cin >> student.finalExam;

    student.normalizedMidterm = (student.midterm / 2);
    student.normalizedQuiz = ((student.quiz[0] + student.quiz[1]) * 2.5);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    calculateLetterGrade(student);
    cout << "The student's grades are as follows:\n"
    << "Quiz 1: " << student.quiz[0] << "/10\n"
    << "Quiz 2: " << student.quiz[1] << "/10\n"
    << "Midterm: " << student.midterm << "/100\n"
    << "Final Exam: " << student.finalExam << "/100\n"
    << "Total Percentage: " << student.totalPercentage << "%\n"
    << "Final Letter Grade: " << student.letterGrade << endl;
    return 0;
}

void calculateLetterGrade(StudentScore& student)
{
    double totalPoints = student.normalizedQuiz + student.normalizedMidterm + student.finalExam;
    student.totalPercentage = (totalPoints / TOTAL_SCORE) * 100;
    if (student.totalPercentage >= 90)
        student.letterGrade = 'A';
    else if (student.totalPercentage >= 80)
        student.letterGrade = 'B';
    else if (student.totalPercentage >= 70)
        student.letterGrade = 'C';
    else if (student.totalPercentage >= 60)
        student.letterGrade = 'D';
    else 
        student.letterGrade = 'F';
    return;

}
