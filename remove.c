#include <stdio.h>

int main() {
    int arr[50];
    int pos, i, num;

    // Prompt user for the number of elements
    printf("Enter the number of elements in the array \n: ");
    scanf("%d", &num);

    // Check if the number of elements is within the valid range
    if (num > 50 || num <= 0) {
        printf("Invalid number of elements. Please enter a number between 1 and 50.\n");
        return 1;
    }

    // Input elements into the array
    printf("Enter %d elements in the array:\n", num);
    for (i = 0; i < num; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Prompt user for the position of the element to delete
    printf("Enter the position of the element you want to delete (1 to %d): ", num);
    scanf("%d", &pos);

    // Check if the position is valid
    if (pos > num || pos <= 0) {
        printf("Deletion is not possible. Invalid position.\n");
        return 1;
    }

    // Shift elements to the left to overwrite the element to be deleted
    for (i = pos - 1; i < num - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrement the number of elements
    num--;

    // Display the resultant array
    printf("The resultant array is:\n");
    for (i = 0; i < num; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
        printf("\n");
    }

    return 0;
}