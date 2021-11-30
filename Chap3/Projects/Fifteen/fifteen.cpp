#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int simulateDeath(int age, char gender);

int main()
{
    int age, death;
    char gender;
    cout << "Enter your age and gender (m/f): ";
    cin >> age >> gender; 
    death = simulateDeath(age, gender);

    cout << "You will die at age " << death << endl;

    return 0;
}

int simulateDeath(int age, char gender)
{
    srand(398359);
    int death;
    double fileAge;
    bool willDie(false);
    double probability, randomNumber;
    ifstream inputStream;
    inputStream.open("probability.txt");
    inputStream >> fileAge;
    while (fileAge != age)
    {
        for (int i = 1; i <= 7; i++)
        {
            inputStream >> fileAge;
        }
    } 
    
    do
    {
        if (gender == 'm')
        {
            inputStream >> probability;
            randomNumber = ((RAND_MAX - rand()) / static_cast<double>(RAND_MAX));
            if (randomNumber <= probability)
                willDie = true;
            else   
            {
                for (int i = 1; i <= 6; i++)
                {
                    inputStream >> fileAge;
                }
            }
        }
        else 
        {
            for (int i = 1; i <= 4; i++)
                inputStream >> probability;
            randomNumber = ((RAND_MAX - rand()) / static_cast<double>(RAND_MAX));
            if (randomNumber <= probability)
                willDie = true;
            else   
            {
                for (int i = 1; i <= 3; i++)
                {
                    inputStream >> fileAge;
                }
            }
            
        }
        
    } while (willDie == false && fileAge < 119);
    inputStream.close(); 
    return fileAge;   
}