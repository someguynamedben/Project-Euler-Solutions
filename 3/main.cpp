/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <iostream>
#include <cmath>

bool isPrime(int num){
    if(num < 2) return false;
    if(num % 2 == 0) return true;

    int root = (int)sqrt((double)num);

    for(int i = 3; i <= root; i += 2){
        if(num % i == 0) return false;
    }

    return true;
}

int main() {
    long num = 600851475143;
    int maxFactor = 0;
    int root = (int)sqrt((double)num);

    if(num % 3 == 0) maxFactor = 3;

    for(int i = 1; i <= root; i++){
        int lower = 6 * i - 1;
        int upper = 6 * i + 1;

        if(isPrime(lower) and num % lower == 0){
            if(lower > maxFactor) maxFactor = lower;
        }
        if(isPrime(upper) and num % upper == 0){
            if(upper > maxFactor) maxFactor = upper;
        }
    }

    std::cout << "Max factor of " << num << " is " << maxFactor << "." << std::endl;

    return 0;
}
