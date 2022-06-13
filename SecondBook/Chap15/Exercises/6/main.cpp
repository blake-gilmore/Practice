/*A palindrome is a string that reads the same both forward and backward.
For example, the string "madam" is a palindrome. Write a program that uses
a recursive function to check whether a string is a palindrome. Your
program must contain a value-returning recursive function that returns true
if the string is a palindrome and false otherwise. Do not use any global
variables; use the appropriate parameters.*/

#include <iostream>
#include <string>
bool isPalindrome(std::string);
int main()
{
    std::string userInput;
    int input;
    do 
    {
        std::cout << "Enter the string to check if it's a palindrome: ";
        std::cin >> userInput;
        if (isPalindrome(userInput))
            std::cout << "It's a palindrome!";
        else
            std::cout << "No :(";

        std::cout << "\nWant to go again? 1 for yes: ";
        std::cin >> input;
    }while (input == 1);
    
    return 0;
}
bool isPalindrome(std::string userInput)
{
    if (userInput[0] != userInput[userInput.length()- 1])
        return false;
    else if (userInput.length() < 4)
        return true;
    else return isPalindrome(userInput.substr(1, userInput.length()-2));

    return true;
}