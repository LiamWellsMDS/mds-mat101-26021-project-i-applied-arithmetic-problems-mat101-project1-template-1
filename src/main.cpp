#include <iostream> 
#include "exercises.h"

using namespace mat101;

int main()
{
    std::cout << "MAT101 Project 1 (autograded template)\n";
    std::cout << "This executable is for your manual testing.\n\n";

    // Example usage (you can expand this for your own checking)
    const double A1a = exA1_expression(1, 2, 3, 4);
    std::cout << "Example exA1_expression(1,2,3,4) = " << A1a << "\n";
    double a, b, c, d;
    double A1b = exA1_find_values_for_minus_two(a, b, c, d);
    std::cout << "Example exA1_find_values_for_minus_two = " << A1b << "\n";
    
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

    bool A6a = exA6_both_even_bitwise(4, 3);
    if (A6a == 1) {
        std::cout << "exA6_both_even_bitwise = " << "true" << "\n";
    }
    else std::cout << "exA6_both_even_bitwise = " << "false" << "\n";
    bool A6b = exA6_both_even_bitwise(4, 2);
    if (A6b == 1) {
        std::cout << "exA6_both_even_bitwise = " << "true" << "\n";
    }
    else std::cout << "exA6_both_even_bitwise = " << "false" << "\n";
    bool A6c = exA6_both_even_bitwise(3, 2);
    if (A6c == 1) {
        std::cout << "exA6_both_even_bitwise = " << "true" << "\n";
    }
    else std::cout << "exA6_both_even_bitwise = " << "false" << "\n";

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

    int A8a = exA8_shift_subtract(7, 2);
    std::cout << "exA8_shift_subtract = " << A8a << "\n";
    int A8b = exA8_shift_subtract(7, 16);
    std::cout << "exA8_shift_subtract = " << A8b << "\n";
    int A8c = exA8_shift_subtract(1, 1);
    std::cout << "exA8_shift_subtract = " << A8c << "\n";
   
    //note decimals are not included given the function uses integers
    int A9a = exA9_compound_div(7, 2);
    std::cout << "exA9_compound_div = " << A9a << "\n";
    int A9b = exA9_compound_div(2, 0);
    std::cout << "exA9_compound_div = " << A9b << "\n";
    
    double B1 = exB1_simple_interest(500, .10, 3);
    std::cout << "exB1_simple_interest = " << B1 << "\n";

    int B2a = exB2_quadratic_nature(5, 5, 2);
    std::cout << "exB2_quadratic_nature = " << B2a << "\n";
    int B2b = exB2_quadratic_nature(3, 6, 3);
    std::cout << "exB2_quadratic_nature = " << B2b << "\n";
    int B2c = exB2_quadratic_nature(2, 3, 1);
    std::cout << "exB2_quadratic_nature = " << B2c << "\n";
    int B2d = exB2_quadratic_nature(0, 1, 1);
    std::cout << "exB2_quadratic_nature = " << B2d << "\n";
    
    int B3a = exB3_is_perfect_square(3);
    if (B3a == 1) {
        std::cout << "exB3_is_perfect_square = " << "true" << "\n";
    }
    else std::cout << "exB3_is_perfect_square = " << "false" << "\n";
    int B3b = exB3_is_perfect_square(4);
    if (B3b == 1) {
        std::cout << "exB3_is_perfect_square = " << "true" << "\n";
    }
    else std::cout << "exB3_is_perfect_square = " << "false" << "\n";
    
    double B4a = exB4_divisibility_class(6);
    std::cout << "exB4_divisibility_class = " << B4a << "\n";
    double B4b = exB4_divisibility_class(4);
    std::cout << "exB4_divisibility_class = " << B4b << "\n";
    double B4c = exB4_divisibility_class(7);
    std::cout << "exB4_divisibility_class = " << B4c << "\n";
    double B4d = exB4_divisibility_class(3);
    std::cout << "exB4_divisibility_class = " << B4d << "\n";

    int odds, evens;
    exB5_count_even_odd(1, 9, evens, odds);
    
    double B6a = exB6_sum_0_to_n(5);
    std::cout << "exB6_sum_0_to_n = " << B6a << "\n";
    double B6b = exB6_sum_0_to_n(-1);
    std::cout << "exB6_sum_0_to_n = " << B6b << "\n";
    double B6c = exB6_sum_0_to_n(0);
    std::cout << "exB6_sum_0_to_n = " << B6c << "\n";
    double B6d = exB6_sum_0_to_n(1);
    std::cout << "exB6_sum_0_to_n = " << B6d << "\n";
    
    bool out_and, out_or, out_not_p, out_xor;
    exB7_logical_expr(true, true, out_and, out_or, out_not_p, out_xor);
    exB7_logical_expr(false, true, out_and, out_or, out_not_p, out_xor);
    exB7_logical_expr(true, false, out_and, out_or, out_not_p, out_xor);
    exB7_logical_expr(false, false, out_and, out_or, out_not_p, out_xor);
    
    int B8a = exB8_sum_digits_do_while(123);
    std::cout << "exB8_sum_digits_do_while = " << B8a << "\n";
    int B8b = exB8_sum_digits_do_while(0);
    std::cout << "exB8_sum_digits_do_while = " << B8b << "\n";
    int B8c = exB8_sum_digits_do_while(-45);
    std::cout << "exB8_sum_digits_do_while = " << B8c << "\n";
    
    int x, y, z, v;
    int exB9 = exB9_four_consecutive_sum_110(x, y, z, v);
    std::cout << "xB9_four_consecutive_sum_110 = " << exB9 << "\n";
    
    bool B10a = exB10_is_prime(0);
    if (B10a == 1) {
        std::cout << "exB10_is_prime = " << "prime" << "\n";
    }
    else std::cout << "exB10_is_prime = " << "not-prime" << "\n";
    bool B10b = exB10_is_prime(1);
    if (B10b == 1) {
        std::cout << "exB10_is_prime = " << "prime" << "\n";
    }
    else std::cout << "exB10_is_prime = " << "not-prime" << "\n";
    bool B10c = exB10_is_prime(2);
    if (B10c == 1) {
        std::cout << "exB10_is_prime = " << "prime" << "\n";
    }
    else std::cout << "exB10_is_prime = " << "not-prime" << "\n";
    bool B10d = exB10_is_prime(3);
    if (B10d == 1) {
        std::cout << "exB10_is_prime = " << "prime" << "\n";
    }
    else std::cout << "exB10_is_prime = " << "not-prime" << "\n";
    bool B10e = exB10_is_prime(4);
    if (B10e == 1) {
        std::cout << "exB10_is_prime = " << "prime" << "\n";
    }
    else std::cout << "exB10_is_prime = " << "not-prime" << "\n";
    bool B10f = exB10_is_prime(5);
    if (B10f == 1) {
        std::cout << "exB10_is_prime = " << "prime" << "\n";
    }
    else std::cout << "exB10_is_prime = " << "not-prime" << "\n";
    bool B10g = exB10_is_prime(6);
    if (B10g == 1) {
        std::cout << "exB10_is_prime = " << "prime" << "\n";
    }
    else std::cout << "exB10_is_prime = " << "not-prime" << "\n";
    bool B10h = exB10_is_prime(7);
    if (B10h == 1) {
        std::cout << "exB10_is_prime = " << "prime" << "\n";
    }
    else std::cout << "exB10_is_prime = " << "not-prime" << "\n";
    bool B10i = exB10_is_prime(14);
    if (B10i == 1) {
        std::cout << "exB10_is_prime = " << "prime" << "\n";
    }
    else std::cout << "exB10_is_prime = " << "not-prime" << "\n";
    
    int passout_a[3];
    int exB10_a = exB10_primes_in_range(1, 5, passout_a, 3);
    std::cout << "exB10_primes_in_range = " << exB10_a << "\n";
    int passout_b[3] = {};
    int exB10_b = exB10_primes_in_range(5, 1, passout_b, 3);
    std::cout << "exB10_primes_in_range = " << exB10_b << "\n";
    int passout_c[1];
    int exB10_c = exB10_primes_in_range(1, 5, passout_c, 0);
    std::cout << "exB10_primes_in_range = " << exB10_c << "\n";
    int passout_d[2];
    int exB10_d = exB10_primes_in_range(0, 6, passout_d, 2);
    std::cout << "exB10_primes_in_range = " << exB10_d << "\n";
    int passout_e[5];
    int exB10_e = exB10_primes_in_range(2, 7, passout_e, 5);
    std::cout << "exB10_primes_in_range = " << exB10_e << "\n";

    //exA10
    //did most of the code earlier during a workshop so its not in the same order for testing purposes
    // 
    // Example: Line A is y = 2x + 3
    //          Line B is 2x + 3y = 5  -> y = (-2/3)x + (5/3)
    const double mA = 2.0;
    const double cA = 3.0;
    const double mB = -2.0 / 3.0;
    const double cB =  5.0 / 3.0;

    Point p = exA10_intersection(mA, 0.0, cA, mB, 0.0, cB);
    std::cout << "Example intersection: (" << p.x << ", " << p.y << ")\n";

    const double mC = 2.0;
    const double cC = 2.0;
    const double mD = 2.0;
    const double cD = 2.0;

    Point o = exA10_intersection(mC, 0.0, cC, mD, 0.0, cD);
    std::cout << "Example intersection: (" << o.x << ", " << o.y << ")\n";

    const double mE = 2.0;
    const double cE = 5.0/2.0;
    const double xE = 3.0;
    const double mF = 1.0;
    const double cF = 4.0;
    const double xF = 3.0;

    Point j = exA10_intersection(mE, xE, cE, mF, xF, cF);
    std::cout << "Example intersection: (" << j.x << ", " << j.y << ")\n";

    return 0;
}
