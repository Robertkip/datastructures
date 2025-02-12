#include <stdio.h> //Printf Scanf
#define Max 6 //Maximum queue 6

//Initialize the variables to be used
int queus[Max];
int front = -1;
int rear = -1;

// Function prototype
int enqueue(int Val);

//Initialize the queue function to add to the queue
int enqueue(int Val) {
    //check if the rear is max - 1(if it is full which is max - 1)
    if (rear == Max - 1) {
        printf("Queue is full\n");
        return -1; // Return an error code or handle the error appropriately
    } else {
        //check if front is -1 then initialize to 0
        if (front == -1) front = 0;
        //rear -1 ++
        queus[++rear] = Val;
        //print the inserted value with the below statement
        printf("Inserted element is %d\n", Val);
    }
    //return each value
    return Val;
}

int main() {
    //index 0 || max - 1 check if it is less than 5 which is true
    enqueue(10);
    //index 1 || max - 1 check if it is less than 5 which is true
    enqueue(20);
    //index 2 || max - 1 check if it is less than 5 which is true
    enqueue(30);
    //index 3 || max - 1 check if it is less than 5 which is true
    enqueue(40);
    //index 4 || max - 1 check if it is less than 5 which is true
    enqueue(50);
    //index 5 || max - 1 check if it is less than 5 which is true
    enqueue(60);
    //index 6 ||max - 1 check if it is less than 5 else its false return Queue is full
    enqueue(70); // This will test the "Queue is full" condition
    return 0;
}
