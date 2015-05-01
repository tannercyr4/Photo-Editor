#include <ctime>
#include <cstdlib>
#include "RandomNumberGenerator.h"

//random number generator constructor
RandomNumberGenerator::RandomNumberGenerator(int seed)
{
    //use time to randomize seed
    if (seed == NULL)
    {
        srand(time(NULL));
    }
    else
    {
        //else, use the supplied seed
        srand(seed);
    }
    
}

//will generate a new random number
int RandomNumberGenerator::getRandomNumber(int min, int max) const
{
    int next_number = (rand() % max) + min;
    return next_number;
}