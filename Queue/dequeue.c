#include <stdio.h> // Include the standard I/O library
#define Max 6 //// Define the maximum size of the queue

// Declare an array to hold the queue elements
int queue[Max];
// Initialize the front of the queue to -1 (indicating the queue is empty)
int front = -1;
// Initialize the rear of the queue to -1 (indicating the queue is empty)
int rear = -1;

// Dequeue function to remove an element from the front of the queue
int dequeue() {
    // Check if the queue is empty
    if (front == -1) {
        // Print a message if the queue is empty
        printf("Queue is empty\n");
        // Return -1 to indicate the queue is empty
        return -1;
    } else {
        // Store the value at the front of the queue
        int val = queue[front];
        // Check if there is only one element in the queue
        if (front == rear) {
            // Reset the front to -1
            front = -1;
            // Reset the rear to -1
            rear = -1;
        } else {
            // Move the front to the next element
            front++;
        }
        // Print the deleted element
        printf("Deleted element is %d\n", val);
        // Return the deleted element
        return val;
    }
}

// Enqueue function to add an element to the rear of the queue
void enqueue(int val) {
    // Enqueue function to add an element to the rear of the queue
    if (rear == Max - 1) {
        // Print a message if the queue is full
        printf("Queue is full\n");
        
    } else {
        // Check if the queue is empty
        if (front == -1) {
            // Set the front to the first element
            front = 0;
        }
        // Move the rear to the next position
        rear++;
        // Insert the value at the rear of the queue
        queue[rear] = val;
        // Print the inserted element
        printf("Inserted element is %d\n", val);
    }
}

int main() {
    // Enqueue elements to test the dequeue function
    //Insert 100
    enqueue(100); //
    //Insert 200
    enqueue(200);
    //Insert 30
    enqueue(30);
    //Insert 440
    enqueue(440);
    //Insert 510
    enqueue(510);
    //Insert 260
    enqueue(260);
    //This will not insert since the queue is full
    enqueue(470); // This will test the "Queue is full" condition

    // Dequeue elements
    //dequeue index 0
    dequeue();
    //dequeue index 1
    dequeue();
    //dequeue index 3
    dequeue();
    //dequeue index 4
    dequeue();
    //dequeue index 5
    dequeue();
    //dequeue index 6
    dequeue();
    //dequeue index 7
    dequeue();// This will test the "Queue is empty" condition

    return 0;
}