// Linear search using C program.
#include <stdio.h>

int linearSearch(int* arr, int n, int value) {
    //Creating a for loop to loop through the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {12, 23, 33, 45, 56, 76, 89, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int value;
    // let the user enter the value to be searched
    printf("Enter the value to be searched: ");
    scanf("%d", &value);
    int i = linearSearch(arr, n, value);
    if (i == -1) {
    printf("Value not found in the array");
    } else {
        printf("Value found at index: %d", i);
    }
    return 0;
}