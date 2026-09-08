#include <iostream>
using namespace std;

void reverse(int arr[], int size) {
    int temp = 0;
    int forward = 0;
    int backward = size - 1;
    while (true) {
        if (forward >= backward) {
            break;
        }
        temp = arr[forward];
        arr[forward] = arr[backward];
        arr[backward] = temp;
        forward++;
        backward--;
    }
}

int main() {

    //data input into the array
    int arr[6];
    for (int i = 0; i < 6; i++) {
        cout << "Enter the number: ";
        cin >> arr[i];
    }

    //reversed array
    reverse(arr, 6);

    //Output:
    cout << "reversed elements are: " << endl;
    for (int j = 0; j < 6; j++) {
        cout << arr[j];
    }
}
