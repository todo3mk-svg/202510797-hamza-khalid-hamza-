#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct FamilyMember {
    std::string name;
    int age;
};

// Comparator to sort family members alphabetically by name
bool compareNames(FamilyMember a, FamilyMember b) {
    return a.name < b.name;
}

int main() {
    int n;
    std::cout << "Enter number of family members: ";
    std::cin >> n;

    std::vector<FamilyMember> family(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter name: ";
        std::cin >> family[i].name;
        std::cout << "Enter age: ";
        std::cin >> family[i].age;
    }

    // Binary Search requires a sorted list
    std::sort(family.begin(), family.end(), compareNames);

    std::string key;
    std::cout << "\nEnter a key name to be searched: ";
    std::cin >> key;

    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (family[mid].name == key) {
            std::cout << key << " was found and is aged " << family[mid].age << std::endl;
            found = true;
            break;
        }
        if (family[mid].name < key) low = mid + 1;
        else high = mid - 1;
    }

    if (!found) std::cout << "Not found" << std::endl;

    return 0;
}