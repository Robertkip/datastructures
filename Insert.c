// Online C compiler to run C program online
#include <stdio.h>

void insert(int arr[], int *n, int pos, int val) {
    // Shift elements to the right
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the new value at the specified position
    arr[pos] = val;
    // Increment the size of the array
    (*n)++;
}

int main() {
    // Initialize the array with 7 elements, first 5 are initialized
    int arr[7] = {10, 12, 34, 32, 45};
    int n = 5;    // Current number of elements
    int pos = 3;  // Position to insert the new value
    int val = 49; // Value to be inserted

    // Insert the value into the array
    insert(arr, &n, pos, val);

    // Print the updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}