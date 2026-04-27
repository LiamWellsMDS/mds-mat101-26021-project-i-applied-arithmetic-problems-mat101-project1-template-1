#include <iostream>
#include "exercises.h"

using namespace mat101;

int main()
{
    std::cout << "MAT101 Project 1 (autograded template)\n";
    std::cout << "This executable is for your manual testing.\n\n";

    // Example usage (you can expand this for your own checking)
    const double v = exA1_expression(1, 2, 3, 4);
    std::cout << "Example exA1_expression(1,2,3,4) = " << v << "\n";
    double a, b, c, d;
    double f = exA1_find_values_for_minus_two(a, b, c, d);
    std::cout << "Example exA1_find_values_for_minus_two = " << f << "\n";
    bool g = exA2_sum_greater_than_diff(1, 2, 10, 4);
    if (g == 1) {
        std::cout << "exA2_sum_greater_than_diff = " << "true" << "\n";
    }
    else std::cout << "exA2_sum_greater_than_diff = " << "false" << "\n";
    bool j = exA2_sum_greater_than_diff(1, 2, 3, 4);
    if (j == 1) {
        std::cout << "exA2_sum_greater_than_diff = " << "true" << "\n";
    }
    else std::cout << "exA2_sum_greater_than_diff = " << "false" << "\n";


    // Example: Line A is y = 2x + 3
    //          Line B is 2x + 3y = 5  -> y = (-2/3)x + (5/3)
    const double mA = 2.0;
    const double cA = 3.0;
    const double mB = -2.0 / 3.0;
    const double cB =  5.0 / 3.0;

    Point p = exA10_intersection(mA, 0.0, cA, mB, 0.0, cB);
    std::cout << "Example intersection: (" << p.x << ", " << p.y << ")\n";

    return 0;
}
