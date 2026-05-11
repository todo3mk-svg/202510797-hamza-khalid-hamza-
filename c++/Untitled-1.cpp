#include <iostream>
#include <vector>

int main() {
    // 1. Initialize variables
    int chosenNumber = 7; // The secret number [cite: 16, 17]
    int userGuess = 0;    // Variable for user input [cite: 18]
    std::vector<int> attempts; // List to record every attempt 

    std::cout << "--- Guess the Secret Number ---" << std::endl;

    // 2. The While Loop: Runs until the guess is correct 
    while (userGuess != chosenNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess; // Store the value [cite: 22, 23]
        
        // Immediately record the attempt [cite: 24]
        attempts.push_back(userGuess);

        // 3. Comparison logic [cite: 25]
        if (userGuess > chosenNumber) {
            std::cout << "Too high" << std::endl; // [cite: 26]
        } else if (userGuess < chosenNumber) {
            std::cout << "Too low" << std::endl;  // [cite: 27]
        } else {
            std::cout << "Correct!" << std::endl; // [cite: 28]
        }
    }

    // 4. The For Loop: Display all recorded guesses 
    std::cout << "\nYour guessing history:" << std::endl;
    for (int i = 0; i < attempts.size(); i++) {
        std::cout << "Attempt " << i + 1 << ": " << attempts[i] << std::endl;
    }

    return 0;
}