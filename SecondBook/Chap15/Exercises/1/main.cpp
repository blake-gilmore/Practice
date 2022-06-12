#include <iostream>

void drawStars(int stars)
{
    for (int i = 0; i < stars; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;
    if (stars != 1)
        drawStars(stars - 1);
    for (int i = 0; i < stars; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    return;
}


int main()
{
    std::cout << "Enter number of max stars:";
    int stars;
    std::cin >> stars;
    drawStars(stars);
    
    return 0;
    
}