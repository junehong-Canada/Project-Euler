// Problem 4: Largest Palindrome Product

#include <iostream>
#include <string>

// Function to check if a number is a palindrome
bool isPalindrome(int number) {
    std::string numStr = std::to_string(number);
    std::string reversedStr = std::string(numStr.rbegin(), numStr.rend());
    return numStr == reversedStr;
}

int main() {
    int largestPalindrome = 0;

    // Iterate through all pairs of 3-digit numbers
    for (int i = 100; i <= 999; ++i) {
        for (int j = i; j <= 999; ++j) { // Start j at i to avoid repeated pairs
            int product = i * j;
            if (isPalindrome(product) && product > largestPalindrome) {
                largestPalindrome = product;
            }
        }
    }

    std::cout << "The largest palindrome made from the product of two 3-digit numbers is: " << largestPalindrome << std::endl;

    return 0;
}
