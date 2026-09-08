#include <iostream>

int main() {

    //array declared adn initialized
    int numbers[] = {2, 4, 6, 8, 10};

    // Modify the third element (index 2)
    numbers[2] = 7;

    // Display elements separated by spaces
    for (int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " ";
    }

}