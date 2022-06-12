#include <iostream>

class invalidSec{};
class invalidHr{};
class invalidMin{};
int main()
{
    int hour, minute, second;
    bool done(false);
    do
    {
        try 
        {
            std::cout << "Enter a 12-hour notation: ";
            std::cin >> hour >> minute >> second;
            if (hour < 0)
                throw invalidHr();
            else if (minute < 0)
                throw invalidMin();
            else if (second < 0)
                throw invalidSec();

            done = true;
        }
        catch(invalidHr)
        {
            std::cout << "1";
        }
        catch(invalidMin)
        {
            std::cout << "2";
        }
        catch(invalidSec)
        {
            std::cout << "3";
        }
        
    }while(!done);

    return 0;
}