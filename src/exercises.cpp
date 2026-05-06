/***********************************************************************  
Bachelor of Software Engineering
Media Design School, 
Auckland,    New Zealand
(c) 2026 Media Design School                         
Author      :   Liam Wells    
Mail        :   Liam.Wells@mds.ac.nz              
File Name   :	exercises.cpp
Description :	Source implementation file for exercises as part of MAT101 Project I
**************************************************************************/

#include "exercises.h"
#include <cmath>
//added for using std::cout for easier testing for some problems
//#include <iostream> 

namespace mat101 {

    // ============================================================
    // PART A - Operators
    // ============================================================

    //--------- EXERCISE A1 --------
    //---- Arithmetic Operators ----
    //
    // Learning goal:
    // - practise building an algebraic expression using +, -, and *.
    //
    // Task:
    // - compute the algebraic expression "(a + b) × (c - d)" and return it
    //
    // Tip:
    // - use brackets exactly like the algebra.
    double exA1_expression(double _a, double _b, double _c, double _d)
    {
        double result = (_a + _b) * (_c - _d);
        return result;
    }

    // Part 2 of A1:
    //
    // Learning goal:
    // - practise rearranging a simple equation and choosing values that satisfy it.
    //
    // Task:
    // - choose four values (a,b,c,d) such that:
    //     (a + b) * (c - d) == -2
    //
    // IMPORTANT:
    // - You must SET the output parameters (out_a, out_b, out_c, out_d).
    //
    // Hints:
    // - Think of it as:
    //      X * Y = -2
    //   where X = (a+b) and Y = (c-d)
    // - Choose small integers for X and Y, like (1 and -2) or (2 and -1).
    // - Then pick a,b that add to X and pick c,d that subtract to Y.
    float exA1_find_values_for_minus_two(double& out_a, double& out_b, double& out_c, double& out_d)
    {
        out_a = 1.0;
        out_b = 1.0;
        out_c = 1.0;
        out_d = 2.0;

        return (float)exA1_expression(out_a, out_b, out_c, out_d);
    }

    //--------- EXERCISE A2 --------
    //---- Relational Operators ----
    //
    // Learning goal:
    // - practise comparing two expressions using >.
    //
    // Task:
    // - return true if (a + b) is greater than (c - d), otherwise false.
    //
    // Tip:
    // - compute the left side and right side into variables first (readability).
    bool exA2_sum_greater_than_diff(double a, double b, double c, double d)
    {
        //note else isn't required because return instantly ends the function
        if ((a + b) > (c - d))
        {
            return true;
        }
        return false; 
    }

    //--------- EXERCISE A3 --------
    //---- Logical Operators ----
    //
    // Learning goal:
    // - practise combining conditions using && (AND).
    //
    // Task:
    // - return true when:
    //     (a + b) is non-zero  AND  (c - d) is zero
    //
    // Tip:
    // - "non-zero" means: expression != 0
    bool exA3_nonzero_and_zero(double a, double b, double c, double d)
    {
        /*checks if a + b is not equal to 0 and c - d is equal to 0
        note how additional brackets aren't needed when using AND*/
        if ((a + b) != 0 && (c - d) == 0)
        {
            return true;
        }
        return false;
}

//--------- EXERCISE A4 --------
//---- Increment/Decrement + Integer Division ----
//
// Learning goal:
// - practise ++ and --, and integer division behaviour.
//
// Task:
// 1) increment a by 1
// 2) decrement d by 1
// 3) return (a * b) - (c / d) using integer division
//
// Important:
// - after decrementing, d could become 0 (divide-by-zero is a crash).
// - if d becomes 0, treat (c / d) as 0.
int exA4_inc_dec_calc(int a, int b, int c, int d)
{
    //increment and decrement simply increase or decrease a number by 1
    a++;
    d--;
    int sum;

    //check if d is 0
    if (d != 0)
    {
        sum = (a * b) - (c / d);
        return sum;
    }
    else 
        //because c / d is equal to 0 we don't need to bother minusing it
        sum = (a * b);
    return sum;
}

//--------- EXERCISE A5 --------
//---- Ternary Operator ----
//
// Learning goal:
// - practise the ternary operator (condition ? valueIfTrue : valueIfFalse).
//
// Task:
// - return the larger of (a + b) and (c - d) using ONE ternary expression.
int exA5_larger_sum_or_diff(int a, int b, int c, int d)
{
    /*sets larger to the "true" or "false" value of the operator based on which equation is larger
    this is done in the second half of the operation*/
    int larger = ((a + b) > (c - d)) ? (a + b) : (c - d);
    return larger;
}

//--------- EXERCISE A6 --------
//---- Bitwise Operators ----
//
// Learning goal:
// - practise using bitwise AND (&) to test for even numbers.
//
// Tip:
// - An integer is even when its least significant bit is 0:
//       ie. (n & 1) is zero (hint: check it for equality with 0)
bool exA6_both_even_bitwise(int a, int b)
{
    /*if the first bit is 0 the number is even otherwise it is odd
    the bitwise & returns true (1) if the given number has a given bit value
    given 1 is true and 0 is false we can add the bitwise & 1 of both numbers together to get if the numbers are both even*/
    if ((a & 1) + (b & 1) == 0)
    {
        return true;
    }
    else return false;
}

//--------- EXERCISE A7 --------
//---- Modulo Operator ----
//
// Learning goal:
// - practise using % to check divisibility.
//
// Task:
// - return true if a is divisible by b
// - if b == 0, return false (divide-by-zero is a crash).
bool exA7_divisible(int a, int b)
{
    if (b != 0)
    {
        //if a number can be divided by another the divisor will return 0
        if ((a % b) == 0)
        {
            return true;
        }
        else return false;
    }
    return false;
}

//--------- EXERCISE A8 --------
//---- Shift Operators ----
//
// Learning goal:
// - practise bit shifting.
// - use bit shift left <<
// - and bit shift right >>
//
// Task:
// 1) bit shift a left 2 times
// 2) bit shift b right 2 times
// 3) return the result of (1) minus (2)
//
// Note:
// - shifting left by 2 is like multiplying by 4 (for ints)
// - shifting right by 2 is like dividing by 4 (for ints, truncates)
int exA8_shift_subtract(int a, int b)
{
    /*bit shift function is used to shift the bits 2 spaces
    if a bit such as 2 was shifted right by 2 (2/4 = 0.5) it would return 0 due to us shifting an int which does not handle decimal values*/
    a = a << 2;
    b = b >> 2;
    return (a - b); 
}

//--------- EXERCISE A9 --------
//---- Compound Assignment Operators ----
//
// Learning goal:
// - practise += and *=.
//
// Task:
// - add 5 to a and set a as the result using compound assignment
// - multiply b by 2 and set b as the result using compound assignment
// - return a / b using integer division
// - if b becomes 0, return 0 (divide-by-zero is a crash).
int exA9_compound_div(int a, int b)
{
    //compound assignments work like so: a + a = 5 is the same as a += 5
    a += 5;
    b *= 2;
    if (b == 0)
    {
        return 0;
    }
    return (a / b);
}

//--------- EXERCISE A10 --------
//---- Lines + Simultaneous Equations ----
//
// Learning goal:
// - practise using y = mx + c (slope-intercept form)
// - practise solving two equations to find an intersection point
// - practise returning a struct (Point)
//
// This exercise is in TWO parts:
//
// Part 1) exA10_line(_m, _x, _c)
// - Implement the slope-intercept equation for a line
// - ie. Given m, x, and c, return the y value.
//
// Part 2) exA10_intersection(...)
// y = 1x + 4 (m1, c1)
// y = 2x + 7 (m2, c2)
// - You are given TWO lines in slope-intercept form (m and c for each line).
// - Find the point where both lines have the same x and y.
// - Return the result as a Point struct.
//
// Hint:
// Use your understanding of solving systems of simultaneous equations
// Algebraically rearrange before writing equations to calculate and store single variables
// ie. you may need to rearrange to "find x"
//
// Notes:
// - For this project, make sure you check the lines are NOT parallel (mA != mB).
// in such a case as they are parallel, you may return a Point struct of 0x, 0y
// - The parameters named _LineA_x and _LineB_x exist to match the “m, x, c” pattern,
//   but the intersection calculation should use the x you solve for 
// - hint: You can ignore the _LineA_x, and _LineB_x if you wish as only one is required to find the 
// y coord in the final step and it is neither of the Line's x values (depending on your approach) 
//
// Tip (about structs):
// - You can do either:
//     Point p; p.x = x; p.y = y; return p;
//   OR
//     return Point{ x, y };

// Part 1 implement y-slope intercept calcuation for a line
double exA10_line(double _m, double _x, double _c)
{
    /*slope - intercept equation for a line
    m is gradient, c is y intercept, and x is the lines x value*/
    double y = _m * _x + _c;
    return y;
}

// Part 2 for Lines + Simultaneous Equations, find and return point
Point exA10_intersection(double _LineA_m, double _LineA_x, double _LineA_c, double _LineB_m, double _LineB_x, double _LineB_c)
{
    //returns 0 if both lines are the same (parallel or exact same line twice)
    if (_LineA_m == _LineB_m)
    {
        //fairly self explanatory point structure has been used here (it returns 2 values in the form of a point - (x, y))
        return Point{ 0.0, 0.0 };
    }

    /*at the intersect point both equations y value is equal so we merge the slope - intercept equation for both lines to get a single simultaneous equation
    _LineA_m * x + LineA_c = _LineB_m * x + _LineB_c
    we want to rearrange this equation to solve for x (note we can't simplify x out of the equation here)
    _LinaA_m * x + _LineB_m * x = _LineB_c - _LineA_c
    we want to remove that additional x so we can simplify the equation to
    (_LinaA_m + _LineB_m) * x = _LineB_c - _LineA_c
    then we can divide giving us our final equation
    x = (_LineB_c - _LineA_c) / (_LinaA_m + _LineB_m)
    so we can use this equation to find the x intersect*/
    double x = (_LineB_c - _LineA_c) / (_LineA_m - _LineB_m);
    //we can now use the x intersect value we just got to solve for the y intersect by using the slope-intercept equation
    double y = exA10_line(_LineA_m, x, _LineA_c);

    return Point{x, y};
}

// ============================================================
// PART B - Algebra + Conditionals + Loops
// ============================================================

//--------- EXERCISE B1 --------
//---- Simple Interest ----
//
// Simple Interest = Principal Amount × Interest Rate × Time
double exB1_simple_interest(double P, double R, double T)
{
    double Interest = P * R * T;
    return Interest;
}

//--------- EXERCISE B2 --------
//---- Nature of Quadratic Roots ----
//
// return -1 for any errors or unexpected results
// return 0 if there are no real roots
// return 1 if there is exactly 1 root
// return 2 if there are exactly 2 roots
//
// Remember, if a == 0, it is NOT a quadratic. (ie. return -1)
int exB2_quadratic_nature(double a, double b, double c)
{
    if (a == 0)
    { 
        return -1;
    }
    //b^2 - 4ac > 0 means there are exactly 2 roots (both answers are different)
    else if ((b * b) - (4 * a * c) > 0)
    {
        return 2;
    }
    //b^2 - 4ac = 0 means there is exactly 1 root (both answers are the same)
    else if ((b * b) - (4 * a * c) == 0)
    {
        return 1;
    }
    //b^2 - 4ac < 0 means there are no real roots (cannot be solved)
    else if ((b * b) - (4 * a * c) < 0)
    {
        return 0;
    }
    //additional safety check
    return -1;
}

//--------- EXERCISE B3 --------
//---- Perfect Square ----
//
// Task:
// - return true if n is a perfect square (0,1,4,9,16,...)
//
// Tip:
// - Use sqrt(n), truncate to int, and square back to compare.
bool exB3_is_perfect_square(int n)
{
    //a perfect square is a product of an integer multiplied by itself (2 x 2 but not 1.5 x 1.5 would be valid)
    double root;
    //sqrt is square root of a number
    root = sqrt(n);
    //rounds towards 0 functionally returning only the integer part of the number
    root = trunc(root);
    //using the math function we can put root to a power instead of multiplying it by itself
    root = pow(root, 2);
    if (root == n)
    {
        return true;
    }
    return false;
}

//--------- EXERCISE B4 --------
//---- Divisibility Classification ----
//
// Return:
// 0 : divisible by 2 and 3
// 1 : divisible by 2 but not 3
// 2 : neither divisible by 2 nor by 3
int exB4_divisibility_class(int n)
{
    if (n % 2 == 0 && n % 3 == 0)
    {
        return 0;
    }
    //notably we want to use != 0 given we know that if a divisor returns 0 the number we are testing is divisible so this simply does the opposite
    else if (n % 2 == 0 && n % 3 != 0)
    {
        return 1;
    }
    else if (n % 2 != 0 && n % 3 != 0)
    {
        return 2;
    }
    return -1;
}

//--------- EXERCISE B5 --------
//---- Counting with a Loop ----
//
// Task:
// - count evens and odds in [lower, upper]
// - if lower > upper, treat as empty range
void exB5_count_even_odd(int lower, int upper, int& evenCount, int& oddCount)
{
    //setting multiple variables of the same type at the same time
    evenCount = 0, oddCount = 0;

    //for loops have 3 conditions, 1 sets a value, 2 is the condition the program runs until completed, 3 is an event that happens each loop
    for(int i = lower; i <= upper; i++)
    {
        if (i % 2 != 0)
        {
            oddCount ++;
        }
        else evenCount ++;
    }

    /*std::cout used for testing given you cannot return values from a void function
    std::cout << "EvenCount: " << evenCount << " OddCount: " << oddCount << "\n";*/
}

//--------- EXERCISE B6 --------
//---- Loop + Sum ----
//
// Task:
// - Loop from 0 to n (inclusive), summing the numbers as you go.
// - Return the final sum.
// - If n < 0, return 0.
double exB6_sum_0_to_n(int n)
{
    int sum = 0;
    if (n < 0)
    {
        return 0.0;
    }
    else
        //because its inclusive we want to use >= so that it stops after it reaches n not before
        for (int i = 0; n >= i; i++)
        {
            sum += i;
        }
    return sum;
}

//--------- EXERCISE B7 --------
//---- Logical Expressions ----
//
// Task:
// - use the following logical operators to resolve the
// specified formal logic statements as boolean statements
// in C++
//
// Logical operators to be used: AND (&&), OR (||), NOT (!)
void exB7_logical_expr(bool p, bool q,
                       bool& out_and,
                       bool& out_or,
                       bool& out_not_p,
                       bool& out_xor)
{
    out_and = p && q;    // p AND q
    out_or = p || q;     // p OR q
    out_not_p = !p;      // NOT p
    out_xor = p != q;    // XOR: true iff p and q have different truth values (not equal to each other)
}

//--------- EXERCISE B8 --------
//---- DO-WHILE Loop + Digits ----
//
// Task:
// - Use a DO-WHILE loop.
// - Return the sum of the decimal digits of n.
// - For negative n, use the absolute value.
//
// Examples:
//  123 -> 6
//  0   -> 0
//  -45 -> 9
int exB8_sum_digits_do_while(int n)
{
    int sum = 0, temp = 0;
    do
    {
        // because it gets the remainder it will get the current digit
        temp = n % 10; 
        //this should be here since we want to add the current digit before removing it
        sum += abs(temp); 
        // removes a digit
        n /= 10; 
    } while (n != 0);
    return sum;
}

//--------- EXERCISE B9 --------
//---- Consecutive Integers ----
//
// Task:
// - Find four consecutive integers a,b,c,d such that they sum to 110
// 
// - HINT:
//     b = a + 1
//     c = b + 1
//     d = c + 1
//     a + b + c + d = 110
//
// Requirements:
// - Set a, b, c, and d.
// - Return the sum (should be 110).
//
// Note:
// - Your instructor will check in the interview that you found them programmatically.
int exB9_four_consecutive_sum_110(int& a, int& b, int& c, int& d)
{
    int sum, dummy;
    a = b = c = d = 0;
    b = a + 1; //a + 1
    c = b + 1; //a + 2
    d = c + 1; //a + 3

    //+1 +2 and +3 add up to 6 just leaving us with the variables (which we have already simplified to all be a) to eliminate
    dummy = 110 - a - b - c - d;

    //given we can treat the other variables as being equal to 'a' we can divide by 4 to get 'a's value
    a = dummy / 4;

    //now we need to test we have found the 4 consecutive integers so we reset the other variables and add them together to get our final answer of 110
    b = a + 1; 
    c = b + 1;
    d = c + 1;

    /*used for testing
    std::cout << "a: " << a << " b: " << b << " c: " << c << " d: " << d << "\n";
    a + b + c + d = 110*/
    sum = a + b + c + d;
    return sum;
}

//--------- EXERCISE B10 --------
//---- Prime Numbers (Range) ----
//
// Learning goal:
// - practise writing a helper function (is_prime)
// - practise loops, conditionals, and working with an output array
//
// Part 1) exB10_is_prime(int n)
// - Return true if n is prime, otherwise false.
// - Use the approach shown in class materials:
//   * handle n <= 1
//   * test divisors from 2 up to sqrt(n)
//
// Part 2) exB10_primes_in_range(int start, int end, int out[], int maxOut)
// - Find prime numbers from start to end (inclusive).
// - Store primes into out[] until you run out of space.
// - Return how many primes you stored.
//
// Rules / Input contract (used by tests):
// - If start > end, return 0!
// - start and end will be in a reasonable range for this course (0..100000).
// - maxOut will be >= 0.
// - If maxOut == 0, you must not write to out[] and should return 0.
//
// How the output array works (important):
// - Think of out[] as a row of boxes in memory.
// - maxOut tells you how many boxes you are allowed to fill.
// - Example:
//     maxOut = 3 means you can store at most 3 primes: out[0], out[1], out[2].
//
// IMPORTANT:
// - exB10_primes_in_range MUST call exB10_is_prime (don't duplicate logic).
bool exB10_is_prime(int n)
{
    //numbers below 2 are not considered prime, even if 1 and 0 technically follow the rules of a prime number
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            //if a divisor is found the number is not prime (a prime number is any number with 2 factors being itself and 1)
            return false; 
        }
    }

    return true;
}

int exB10_primes_in_range(int start, int end, int out[], int maxOut)
{
    (void)start; (void)end; (void)out; (void)maxOut;
    int index = 0;
    //if maxOut == 0 there are no primes, start > end is impossible so we return 0 for that as well
    if (start > end || maxOut == 0)
    {
        return 0;
    }
    else
    for (int i = start; i <= end; i++)
    {
        if (exB10_is_prime(i))
        {
            /*using < is functionally the same as maxOut - 1
            we are using index to track how many primes we have appended to our out array*/
            if (index < maxOut)
            {
                out[index] = i;
                index++;
            }
        }
    }
    /*used for testing given we return index rather than length due to array length being tedious to grab in C++
    although note that returning index is functionally the same as returning array length
    std::cout << out[0] << "\n";
    std::cout << out[1] << "\n";
    std::cout << out[2] << "\n";*/
    return index;
}

} // namespace mat101 (where point is derived)