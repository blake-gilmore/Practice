  /*Write the definitions of the member functions of the class
integerManipulation not given in Example 10-11. Also add the follow-
ing operations to this class: (1) Split the number into blocks of n-digit
numbers starting from right to left and find the sum of these n-digit
numbers. (Note the last block may not have n digits. If needed add
additional instance variables.) (2) Determine whether the number is prime.
(3) Find the prime factorization of the number.
*/

//Algorithm:

#include <iostream>
#include "integerManipulation.h"
using namespace std;
int main() //Line 1
{ //Line 2
integerManipulation number; //Line 3
long long num; //Line 4
cout << "Enter an integer: "; //Line 5
cin >> num; //Line 6
cout << endl; //Line 7
number.setNum(num); //Line 8
number.classifyDigits(); //Line 9
cout << number.getNum() << "- - - - - -" << endl
<< "The number of even digits: "
<< number.getEvensCount() << endl
<< "The number of zeros: "
<< number.getZerosCount() << endl
<< "The number of odd digits: "
<< number.getOddsCount() << endl; //Line 10

number.findFactorization();
return 0; //Line 11
}