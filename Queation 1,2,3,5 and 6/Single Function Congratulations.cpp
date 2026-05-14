#include <iostream>
#include <string>

void congratulateUser(std::string name) {
    std::cout << "Congratulations, " << name << "!" << std::endl;
}

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    congratulateUser(name);
    return 0;
}