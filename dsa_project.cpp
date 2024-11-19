#include <iostream>
using namespace std;

// Function to implement Bubble Sort
void bubbleSort(int arr[], int n) {
    // Traverse through all array elements
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    // Input array size
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];  // Declare array of size n

    // Input array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting the array using bubble sort
    bubbleSort(arr, n);

    // Output the sorted array
    cout << "Sorted array in increasing order: ";
    printArray(arr, n);

    return 0;
}
