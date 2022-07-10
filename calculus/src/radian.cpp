#include <cmath>
#include <math.h>
#include <iostream>
#include "mRadian.h"

const double pi = 3.1415926535897932384626433832795028841971693993751;

double radian()
{
    double radian;
    std::cout << "Enter a radian you want to convert to degrees: " << std::endl;
    std::cin >> radian;

    double degree = ((radian * 180) / pi);
    std::cout << degree << std::endl;
    return degree;
}