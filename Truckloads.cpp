#include "Truckloads.h"

Truckloads::Truckloads(){};

int Truckloads::numTrucks(int numCrates, int loadSize) {
  if (loadSize >= numCrates) return 1;
  return numTrucks(numCrates / 2 + numCrates % 2, loadSize) +
         numTrucks(numCrates / 2, loadSize);
}