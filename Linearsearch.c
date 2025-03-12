// Online C compiler to run C program online
#include <stdio.h>

//Creating a program that search a value using linear search

int linearSearch(int* arr, int n, int key) {
    //Looping while checking for the key in the array.
    for (int i = 0; i < n; i++) {
        if (arr[i] == key ) {
            return i;
        }
    }
    return -1;
}

int main() {
    // The array to search for the value
    int arr[] = {10, 26, 25, 27, 19, 37, 48, 40, 50, 60, 70};
    //The get the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    
    printf("Enter the key to search= ");
    scanf("%d", &key);
    int i = linearSearch(arr, n, key);
    if (i == -1)
    printf("Key not Found");
    else
    printf("Key Found at index: %d", i);

    return 0;
}