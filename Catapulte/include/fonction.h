#ifndef FONCTION_H_
#define FONCTION_H_

#include <iostream>
#include  <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <cmath>

#include "Catapulte.h"

#define g 9.81
#define PI 3.14159265
#define portee 60
#define nb 1000

using namespace std;

bool fctComparePortee (Catapulte*, Catapulte*);
bool fctCompareEnergie (Catapulte*, Catapulte*);
bool fctCompareNote (Catapulte*, Catapulte*);
void calculNote (vector<Catapulte*>);

#endif /* FONCTION_H_ */
