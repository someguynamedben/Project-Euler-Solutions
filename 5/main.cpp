/*
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>

#define MAX_ITERS 20

int gcd(long a, long b){  // using Euclidean algorithm with recursion
    if(b == 0) return a;

    return gcd(b, a % b);
}

int lcm(long a, long b){  // least common multiple
    return (a * b) / gcd(a, b);
}

int main() {
    long total = 1;  // don't divide by zero kids

    for(long i = 2; i <= MAX_ITERS; i++){
        total = lcm(i, total);
    }

    std::cout << "The smallest number divisible by all numbers from 1 to " << MAX_ITERS << " is ";
    std::cout << total << "." << std::endl;

    return 0;
}
