#include <iostream>

int main() {
    //Array of size 5 declared.
    int numbers[5];
    int total = 0;

    // Loop 1: Read five integers into the array
    for (int i = 0; i < 5; ++i) {
        std::cin >> numbers[i];
    }

    // Loop 2: Add the values to total
    for (int i = 0; i < 5; ++i) {
        total += numbers[i];
    }

    // Display the total
    std::cout << total << std::endl;

}
