#include <cmath>
#include <math.h>
#include <iostream>
#include "mDegree.h"

const double pi = 3.1415926535897932384626433832795028841971693993751;

double degree()
{
    double degree;
    std::cout << "Enter a degree you want to convert to radians: " << std::endl;
    std::cin >> degree;

    double radian = ((degree * pi) / 180);
    std::cout << radian << std::endl;
    return radian;
}