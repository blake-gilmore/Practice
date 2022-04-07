#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    double salary, rent, electricity, markUp, cost;
    cout << "Enter total cost: salary of employees: yearly rent: estimated electricity cost: ";
    cin >> cost >> salary >> rent >> electricity;

    double targetProfit, totalPay;
    totalPay = cost+salary+rent+electricity;
    targetProfit = cost*.1;
    double answer;
    answer = ((.10*cost+totalPay)-.85*cost)/(.85*cost);

    answer*=100;
    cout << "Upcharge " << answer << "%\n";
    

    return 0;
}