#include <iostream>

int main() {
    int arr[8];

    // Read 8 integers into the array
    for (int i = 0; i < 8; ++i) {
        std::cin >> arr[i];
    }

    // Initialize with the first element
    int maxVal = arr[0];
    int minVal = arr[0];
    int maxIndex = 0;
    int minIndex = 0;

    // Find largest and smallest values and their first occurrences
    for (int i = 1; i < 8; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
    }

    // Output the results
    std::cout << "Largest value: " << maxVal << " at index " << maxIndex << std::endl;
    std::cout << "Smallest value: " << minVal << " at index " << minIndex << std::endl;
}