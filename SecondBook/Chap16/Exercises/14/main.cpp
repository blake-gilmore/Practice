/*Write a version of the insertion sort algorithm that can be used to sort a
string vector object. Also, write a program to test your algorithm.*/
#include <vector>
#include <string>
#include <iostream>
void vectorInsertion(std::vector<std::string> &str)
{
    std::string tempString;
    for (int i = 1; i < str.size(); i++)
    {
        if (tolower(str[i][0]) < tolower(str[i-1][0]))
        {
            for (int j = i; j > 0; j++)
            {
                
            }
        }
    }
    return;
}
int main()
{
    


    return 0;
}