#include <iostream>

using namespace std;

int main()
{
    const double LITERS_PER_CARTON = 3.78;
    const double COST_PRODUCE = .38;
    const double PROFIT = .27;

    double milkProduced, cartonsNeeded, totalCost, totalProfit;
    int totalCartons;

    cout << "Enter the number of liters produced: ";
    cin >> milkProduced;

    cartonsNeeded = milkProduced / LITERS_PER_CARTON;
    totalCartons = static_cast<int>(cartonsNeeded + .5);

    totalCost = milkProduced * COST_PRODUCE;
    totalProfit = totalCartons * PROFIT;

    cout << "Total cartons: " << totalCartons << endl << "Total cost: $" << totalCost << endl << "Total Profit: $" << totalProfit << endl;

    return 0;
}