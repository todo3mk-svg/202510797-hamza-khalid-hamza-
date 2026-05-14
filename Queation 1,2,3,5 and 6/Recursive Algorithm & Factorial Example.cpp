#include <iostream>

int factorial(int n) {
    // Base case
    if (n <= 1)
        return 1;
    // Recursive step
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    std::cout << "Factorial of " << num << " is " << factorial(num);
    return 0;
}