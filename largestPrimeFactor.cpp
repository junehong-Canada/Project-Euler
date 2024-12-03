// Problem 3: Largest Prime Factor
#include <iostream>

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

long long largestPrimeFactor(long long n) {
    long long largest_factor = -1;

    // Divide out all factors of 2
    while (n % 2 == 0) {
        largest_factor = 2;
        n /= 2;
    }

    // Divide out all factors of 3
    while (n % 3 == 0) {
        largest_factor = 3;
        n /= 3;
    }

    // Check for factors from 5 onwards
    for (long long i = 5; i * i <= n; i += 6) {
        while (n % i == 0) {
            largest_factor = i;
            n /= i;
        }
        while (n % (i + 2) == 0) {
            largest_factor = i + 2;
            n /= (i + 2);
        }
    }

    if (n > 4) largest_factor = n;

    return largest_factor;
}

int main() {
    long long num = 600851475143;
    std::cout << "The largest prime factor of " << num << " is " << largestPrimeFactor(num) << std::endl;
    return 0;
}

/*
This program defines a function largestPrimeFactor to find the largest prime factor of a given number.
It first eliminates all factors of 2 and 3, then checks for factors from 5 onwards using a step of 6 to skip even numbers.
Finally, if there's any remaining factor greater than 4, it is considered the largest prime factor.
*/
