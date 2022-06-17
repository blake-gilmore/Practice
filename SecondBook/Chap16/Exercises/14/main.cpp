/*Write a version of the insertion sort algorithm that can be used to sort a
string vector object. Also, write a program to test your algorithm.*/
#include <vector>
#include <string>
#include <iostream>
void vectorInsertion(std::vector<std::string> &str)
{
    std::string tempString;
    std::string sortString;
    for (int i = 1; i < str.size(); i++)
    {
        if (tolower(str[i][0]) < tolower(str[i-1][0]))
        {
            tempString = str[i];
            for (int j = i-1; j >= 0; j--)
            {
                if (tolower(str[j][0]) > tolower(tempString[0]))
                {
                    str[j+1] = str[j];
                    if (j == 0)
                    {
                        str[j] = tempString;
                    }
                }

                else
                {
                    str[j+1] = tempString;
                    break;
                }
            }
        }
    }
    return;
}
template <class Type>
void printArray(std::vector<Type> arr)
{
    int arrSize = arr.size();
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return;
}

int main()
{
    std::string tempString;
    std::vector<std::string> stringVect;
    for (int i = 0; i < 5; i++)
    {
        std::cin >> tempString;
        stringVect.push_back(tempString);
    }
    vectorInsertion(stringVect);
    printArray(stringVect);


    return 0;
}