#include <iostream>
using namespace std;

int main() {
    int arr[10];

    // Read 10 integers into the array
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int count = 0; // Tracks the position of unique elements

    // Filter unique elements
    for (int i = 0; i < 10; i++) {
        bool isDuplicate = false;


        for (int j = 0; j < count; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If it's the first occurrence, move it to index 'count'
        if (!isDuplicate) {
            arr[count] = arr[i];
            count++;
        }
    }

    // Display unique elements
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Display count
    cout << "Count: " << count << endl;

}