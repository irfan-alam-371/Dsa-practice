#include <iostream>
using namespace std;

int main() {
    int n;
    int key;
    int position = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nArray: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\nEnter element to search: ";
    cin >> key;

    // Linear Search
    for (int i = 0; i < n; i++) {

        if (arr[i] == key) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        cout << "\nElement " << key
             << " found at index " << position
             << " (position " << position + 1 << ").";
    }
    else {
        cout << "\nElement " << key << " not found in the array.";
    }

    cout << endl;

    return 0;
}