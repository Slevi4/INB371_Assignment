#include <cstdlib>
#include <ctime>
#include "random.h"

/// This class provides several functions for generating pseud-random numbers.
///
Random::Random() {
   randomise();
}

/// \brief
///
/// Generates a random integer number greater than or equal to low and less than high.
/// \param low int - lower bound for range (inclusive).
/// \param high int - upper bound for range (exclusive).
/// \return int - A random integer number greater than or equal to low and less than high.
///
int Random::randomInteger(int low, int high) {
   double d = double(rand()) / (double(RAND_MAX) + 1);
   int k = int(d * (high - low  + 1));
   return low + k;
}

/// \brief
/// Generates a true false outcome based on the probability p.
/// Calling randomChance(0.30) returns true 30% of the time.
///
/// \param p double - Value between 0 (never) and 1 (always).
/// \return bool - true or false based on p.
///
bool Random::randomChance(double p) {
   return randomReal(0, 1) < p;
}

/// \brief
///
/// Initializes teh random-number generator so that its results are unpredictable.  If this function is
/// not called the other functions will return the same values on each run.
///
void Random::randomise() {
   srand(int(time(NULL)));
}
