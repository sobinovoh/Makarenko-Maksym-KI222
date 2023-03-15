#include <iostream>
#include <cmath>
using namespace std;



double s_calculation(int x, int y, int z){
    double s = 0;
    s = z + M_PI *(((pow((2 * z + 1), 2) - sqrt(abs((y - (1/2) * z))))/(cos(z + y * z) + pow(x, 2))));
    return s;
}
