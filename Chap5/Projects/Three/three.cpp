//User inputs list of numbers into an array
//Computes standard deviation of those numbers
#include <iostream>
#include <cmath>
using namespace std;
const int MAX_SIZE = 100;
void inputNumbers(double listOfNumbers[], int size, int& numberUsed);
double calculateStdDev(double listOfNumbers[], int numberUsed);
double calculateAverage(double listOfNumbers[], int numberUsed);
double calculateSumOfMeanDiff(double listOfNumbers[], int numberUsed, double average);


int main()
{
    double listOfNumbers[MAX_SIZE], standardDeviation;
    int numberUsed;
    inputNumbers(listOfNumbers, MAX_SIZE, numberUsed);
    standardDeviation = calculateStdDev(listOfNumbers, numberUsed);
    cout << "The standard Deviation of your numbers is " << standardDeviation << endl;
    return 0;
}
void inputNumbers(double listOfNumbers[], int size, int& numberUsed)
//Preconditions: size is the declared size of the array
//Postcondition: numberUsed is the number of values stored in list
//list[0] through list[numberUsed-1] will be filled with values from user
{
    cout << "Input a list of numbers, input a negative number when finished";
    int next, index = 0;
    cin >> next;
    while ((next >= 0) && index < size)
    {
        listOfNumbers[index] = next;
        index++;
        cin >> next;
    }
    numberUsed = index;
    return;
}
double calculateStdDev(double listOfNumbers[], int numberUsed)
//Precondition: numberUsed is number of values filled in array listOfNumbers
//PostCondition: Returns standard Deviation of values
{
    double standardDeviation, average, variance, sumOfMeans;
    average = calculateAverage(listOfNumbers, numberUsed);
    sumOfMeans = calculateSumOfMeanDiff(listOfNumbers, numberUsed, average);
    variance = sumOfMeans / numberUsed;
    return sqrt(variance);
}
double calculateAverage(double listOfNumbers[], int numberUsed)
//Precondition: numberUsed is number of values filled in array listOfNumbers
//PostCondition: returns average of all values in array listOfNumbers
{
    double sum(0);
    for (int index = 0; index < numberUsed; index++)
        sum += listOfNumbers[index];
    return (sum / numberUsed);
}
double calculateSumOfMeanDiff(double listOfNumbers[], int numberUsed, double average)
//Precondition: numberUsed is number of values filled in array listOfNumbers
//average is the average of all values in listOfNumbers
//Postcondition: returns the sum of all squared differences of values of array and average
{
    double sum(0), difference;
    for (int i = 0; i < numberUsed; i++)
    {
        difference = listOfNumbers[i] - average;
        sum += (difference * difference);
    }
    return sum;
}