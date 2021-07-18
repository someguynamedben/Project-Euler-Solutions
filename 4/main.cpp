/*
 * A palindromic number reads the same both ways.
 * The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include <iostream>

#define MAX_ITERS 899

bool isPalindrome(int num){
    int tempNum = num;
    int revNum = 0;

    while(tempNum != 0){
        int remainder = tempNum % 10;
        revNum = revNum * 10 + remainder;
        tempNum /= 10;
    }

    if(num == revNum) return true;

    return false;
}

int main() {
    int firstNum = 100;
    int secondNum = 100;
    int maxPalindrome, maxFirst, maxSecond = 0;

    for(int i = 0; i < MAX_ITERS; i++){     //iterate first number
        for(int j = 0; j < MAX_ITERS; j++){ //iterate second number
            int currProd = firstNum * secondNum;

            if(isPalindrome(currProd)){
                if(maxPalindrome < currProd) {
                    maxPalindrome = currProd;
                    maxFirst = firstNum;
                    maxSecond = secondNum;
                }
            }

            secondNum += 1;

            if( secondNum > 999){
                secondNum = 100;
            }
        }

        firstNum += 1;
    }

    std::cout << "Max palindrome of two three digit numbers is " << maxPalindrome;
    std::cout << " from " << maxFirst << " * " << maxSecond << "." << std::endl;

    return 0;
}
