#include <stdio.h>

#define MAXSIZE 8  // Use #define instead of global variable

int stack[MAXSIZE];
int top = -1;

int isempty() {
    return top == -1;  // Return 1 if empty, 0 otherwise
}

int isfull() {
    return top == MAXSIZE - 1;  // Return 1 if full, 0 otherwise
}

void push(int value) {
    if (isfull()) {
        printf("Stack overflow! Cannot push %d\n", value);
    } else {
        stack[++top] = value;
        printf("Pushed %d to stack\n", value);
    }
}

int main() {
    // Check if stack is empty
    if (isempty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    // Push elements onto the stack
    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);
    push(20);
    push(100);
    push(200);  // This should fail due to overflow

    // Check if stack is full
    if (isfull()) {
        printf("The stack is full\n");
    } else {
        printf("The stack is not full\n");
    }

    return 0;
}
