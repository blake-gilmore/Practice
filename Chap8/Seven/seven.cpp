#include <iostream>
using namespace std;
class PrimeNumber
{
public:
    PrimeNumber();
    PrimeNumber(int num);
    void operator ++ ();
    void operator ++ (int);
    void operator -- ();
    void operator -- (int);
    int getNumber();
private:
    int number;
};
int main()
{
    PrimeNumber num;
    int temp;
    cout << "Enter the name of the number you want to use as the prime: ";
    cin >> temp;
    PrimeNumber num2(temp);
    do
    {
        cout << "The prime number is now " << num2.getNumber() << endl;
        cout << "1. Increase pre, 2. Increase post 3. Increase pre 4. Increase post 0. Cancel \n";
        cin >> temp;
        switch(temp)
        {
            case 1:
                ++num2;
                break;
            case 2:
                num2++;
                break;
            case 3:
                --num2;
                break;
            case 4:
                num2--;
                break;
        }
    } while (temp != 0);
    
    return 0;
}
PrimeNumber::PrimeNumber()
{
    number = 1;
    return;
}
PrimeNumber::PrimeNumber(int num):number(num)
{
    return;
}
void PrimeNumber::operator ++ ()
{
    bool isPrime(true);
    do
    {
        isPrime = true;
        number++;
        for (int i = 2; i < number; i++)
        {
            if ((number % i) == 0)
            {
                isPrime = false;
            }
        }
    } while (isPrime == false);
    return;
}
void PrimeNumber::operator ++ (int)
{
    bool isPrime(true);
    do
    {
        isPrime = true;
        number++;
        for (int i = 2; i < number; i++)
        {
            if ((number % i) == 0)
            {
                isPrime = false;
            }
        }
    } while (isPrime == false);
    return;
}
void PrimeNumber::operator -- ()
{
    bool isPrime(false);
    while ((isPrime == false) && (number > 1))
    {
        isPrime = true;
        number--;
        for (int i = 2; i < number; i++)
        {
            if ((number % i) == 0)
            {
                isPrime = false;
            }
        }
    }
    return;
}
void PrimeNumber::operator -- (int)
{
    bool isPrime(false);
    while ((isPrime == false) && (number > 1))
    {
        isPrime = true;
        number--;
        for (int i = 2; i < number; i++)
        {
            if ((number % i) == 0)
            {
                isPrime = false;
            }
        }
    }
    return;
}
int PrimeNumber::getNumber()
{
    return number;
}