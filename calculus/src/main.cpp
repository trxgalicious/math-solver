#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <algorithm>
#include <time.h>
#include <string>
#include "mRadian.h"
#include "mDegree.h"

int main()
{
    int ans;
    std::string options = "What would you like to use: Radians to Degree [1], Degree to Radians [2], Solve for a side [3], SOHCAHTOA [4], Inverse Function [5], Derivative [6], Antiderivative [7], Integral [8]\n";
    std::cout << options << std::endl;

    std::cin >> ans;
    switch (ans)
    {
    case 1:
        radian();
        break;
    case 2:
        degree();
        break;
    default:
        std::cout << "That option does not exist." << std::endl;
        break;
    }

    return 0;
}