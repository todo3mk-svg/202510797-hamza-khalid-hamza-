#include <iostream>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 7; // Example: find 7th number
    std::cout << "Fibonacci number at position " << n << " is: " << fibonacci(n);
    return 0;
}