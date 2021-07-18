/*
 * The sum of the squares of the first ten natural numbers is,
 * 1^2 + 2^2 + ... + 10^2 = 385
 * The square of the sum of the first ten natural numbers is,
 * (1 + 2 + ... + 10)^2 = 55^2 = 3025
 * Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
 * 3025 - 385 = 2640.
 * Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 */

#include <iostream>

#define MAX_SUM 100

int main() {
    long sumOfSqrs = 0;
    long sqrOfSums = 0;

    // sum up the squares
    for(int i = 0; i <= MAX_SUM; i++){
        sumOfSqrs += i * i;
    }

    // sum to be squared
    for(int i = 0; i <= MAX_SUM; i++){
        sqrOfSums += i;
    }

    // square the sum 140722165388170
    sqrOfSums = sqrOfSums * sqrOfSums;

    std::cout << "The difference between the sum of the squares and the square of the sums is: ";
    std::cout << sqrOfSums - sumOfSqrs << std::endl;

    return 0;
}
