#include <iostream>

float addFourFloats(float a, float b, float c, float d) {
    return a + b + c + d;
}

int main() {
    float result = addFourFloats(10.5, 2.5, 4.0, 3.0);
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}