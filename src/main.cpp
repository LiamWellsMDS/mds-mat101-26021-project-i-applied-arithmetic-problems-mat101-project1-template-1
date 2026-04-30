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
    
    bool A2a = exA2_sum_greater_than_diff(1, 2, 10, 4);
    if (A2a == 1) {
        std::cout << "exA2_sum_greater_than_diff = " << "true" << "\n";
    }
    else std::cout << "exA2_sum_greater_than_diff = " << "false" << "\n";
    bool A2b = exA2_sum_greater_than_diff(1, 2, 3, 4);
    if (A2b == 1) {
        std::cout << "exA2_sum_greater_than_diff = " << "true" << "\n";
    }
    else std::cout << "exA2_sum_greater_than_diff = " << "false" << "\n";

    bool A3a = exA3_nonzero_and_zero(1, 2, 4, 4);
    if (A3a == 1) {
        std::cout << "exA3_nonzero_and_zero = " << "true" << "\n";
    }
    else std::cout << "exA3_nonzero_and_zero = " << "false" << "\n";
    bool A3b = exA3_nonzero_and_zero(1, 2, 3, 4);
    if (A3b == 1) {
        std::cout << "exA3_nonzero_and_zerof = " << "true" << "\n";
    }
    else std::cout << "exA3_nonzero_and_zero = " << "false" << "\n";
    bool A3c = exA3_nonzero_and_zero(2, -2, 4, 4);
    if (A3c == 1) {
        std::cout << "exA3_nonzero_and_zero = " << "true" << "\n";
    }
    else std::cout << "exA3_nonzero_and_zero = " << "false" << "\n";

    int A4a = exA4_inc_dec_calc(1, 2, 3, 4);
    std::cout << "exA4_inc_dec_calc = " << A4a << "\n";
    int A4b = exA4_inc_dec_calc(1, 1, 1, 1);
    std::cout << "exA4_inc_dec_calc = " << A4b << "\n";

    int A5a = exA5_larger_sum_or_diff(2, 2, 3, 1);
    std::cout << "exA5_larger_sum_or_diff = " << A5a << "\n";
    int A5b = exA5_larger_sum_or_diff(2, 2, 6, 1);
    std::cout << "exA5_larger_sum_or_diff = " << A5b << "\n";

    //UNFINISHED
    int A6a = exA6_both_even_bitwise(2, 1);
    std::cout << "exA6_both_even_bitwise = " << A6a << "\n";
    int A6b = exA6_both_even_bitwise(2, 1);
    std::cout << "exA6_both_even_bitwise = " << A6b << "\n";

    bool A7a = exA7_divisible(4, 3);
    if (A7a == 1) {
        std::cout << "exA7_divisible = " << "true" << "\n";
    }
    else std::cout << "exA7_divisible = " << "false" << "\n";
    bool A7b = exA7_divisible(4, 2);
    if (A7b == 1) {
        std::cout << "exA7_divisible = " << "true" << "\n";
    }
    else std::cout << "exA7_divisible = " << "false" << "\n";
    bool A7c = exA7_divisible(4, 0);
    if (A7c == 1) {
        std::cout << "exA7_divisible = " << "true" << "\n";
    }
    else std::cout << "exA7_divisible = " << "false" << "\n";

    //exA8_shift_subtract
    //UNFINISHED
   
    //exA9_compound_div
    // 
    
    //exA10_line
    //exA10_intersection
    //BOTH UNFINISHED
    
    //exB1_simple_interest
    //exB2_quadratic_nature
    //exB3_is_perfect_square
    //exB4_divisibility_class
    //exB5_count_even_odd
    //exB6_sum_0_to_n
    //exB7_logical_expr
    //exB8_sum_digits_do_while
    //exB9_four_consecutive_sum_110
    //exB10_is_prime
    //exB10_primes_in_range

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
