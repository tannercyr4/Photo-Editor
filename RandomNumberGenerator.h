#ifndef RANDOM_NUMBER_GENERATOR_H
#define RANDOM_NUMBER_GENERATOR_H
#include <cstdlib>
class RandomNumberGenerator
{
public:
    RandomNumberGenerator(int seed = NULL);
    int getRandomNumber(int min_value = 0, int max_value = RAND_MAX) const;
};

#endif