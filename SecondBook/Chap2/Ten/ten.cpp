#include <iostream>

int main()
{
    //Prompts user to enter 5 decimal numbers and converts to nearest int

    //Namespace declarations
    using std::cout;
    using std::cin;
    using std::endl;
    
    //Variable declarations
    double num1, num2, num3, num4, num5, sum;
    int answer;

    //User enters 5 decimal numbers and adds all to sum
    cout << "Enter 5 decimal numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    sum = num1 + num2 + num3 + num4 + num5;

    //Convert sum to nearest int
    //adds .5 and converts to int
    sum += .5;
    answer = static_cast<int>(sum);

    //Outputs answer;
    cout << "The rounded sum is " << answer << endl << endl;

    return 0;
}