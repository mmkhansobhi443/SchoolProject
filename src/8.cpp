// Random C++ Code

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "Hello, World!" << std::endl;

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    std::cout << "Random Number: " << random_number << std::endl;

    // Create a vector of strings
    std::vector<std::string> names;
    names.push_back("Alice");
    names.push_back("Bob");
    names.push_back("Charlie");

    // Iterate through the vector and print each element
    for (const auto &name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}
