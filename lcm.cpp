// Problem 5: smallest multiple

/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?
*/

#include <iostream>
#include <numeric>

// Function to calculate the greatest common divisor
int gcd(int a, int b) {
    return std::gcd(a, b);
}

// Function to calculate the least common multiple
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int result = 1;
    for (int i = 2; i <= 20; ++i) {
        result = lcm(result, i);
    }

    std::cout << "The smallest positive number that is evenly divisible by all numbers from 1 to 20 is: " << result << std::endl;
    return 0;
}
