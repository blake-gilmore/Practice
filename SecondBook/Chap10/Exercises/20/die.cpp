#include "die.h"
#include <time.h>
#include <stdlib.h>
die::die()
{
num = 1;
srand(time(0));
}
void die::roll()
{
num = rand() % 6 + 1;
}
int die::getNum() const
{
return num;
}