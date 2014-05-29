#include <cstdlib>
#include <ctime>
#include "random.h"


Random::Random() {
   randomise();
}

int Random::randomInteger(int low, int high) {
   double d = double(rand()) / (double(RAND_MAX) + 1);
   int k = int(d * (high - low  + 1));
   return low + k;
}

double Random::randomReal(double low, double high){
    double d = double(rand()) / (double(RAND_MAX) + 1);
    return low + d * (high - low);
}

bool Random::randomChance(double p) {
   return randomReal(0, 1) < p;
}

void Random::randomise() {
   srand(int(time(NULL)));
}
