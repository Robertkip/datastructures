//compiler to run C program
#include <stdio.h>

//Creating a program that search a value using linear search

int demoSearch(int* arr, int n, int value) {
    //Looping while checking for the specific value in the array.
    for (int i = 0; i < n; i++) {
        if (arr[i] == value ) {
            //Return the index of the value searched in the array.
            return i;
        }
    }
    return -1;
}

int main() {
    // The array to search for the value
    int arr[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60};
    //The get the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    int value;
    
    printf("Enter the key to search= ");
    scanf("%d", &value);
    int i = demoSearch(arr, n, value);
    if (i == -1)
    printf("The value is not Found");
    else
    printf("The value is at index: %d", i);

    return 0;
}