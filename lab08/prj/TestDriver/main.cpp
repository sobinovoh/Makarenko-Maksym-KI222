#include <iostream>
#include <cmath>
#include "ModulesMakarenko.h"
#define ARRAY_SIZE 6
using namespace std;
int main() {
const float x[ARRAY_SIZE] = {1, -4, 0, -1, 100, -100};
const float y[ARRAY_SIZE] = {1, 2, 0, -1, 50, -50};
const float z[ARRAY_SIZE] = {1, 5, 0, -1, 100, -100};
const float expectedResult[ARRAY_SIZE] = {44,30,3,-1,113,-88};

for (short int i = 0; i < ARRAY_SIZE; i++) {
const float currentReasult = round(s_calculation(x[i], y[i], z[i]));
if (currentReasult == expectedResult[i])
    cout << "Test #" << i+1 << " - PASSED\n";
else
    cout << "Test #" << i+1 << " - FAILED\n";
}
}

