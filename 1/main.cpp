/*
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <iostream>

int main() {
    int answer = 0;
    bool isDivisible;

    for(int i = 0; i < 1000; i++){
        isDivisible = false;

        if(i % 3 == 0){
            answer += i;
            isDivisible = true;
        }
        if(i % 5 == 0 and !isDivisible){
            answer += i;
        }
    }

    std::cout << "Answer: " << answer << std::endl;
    return 0;
}