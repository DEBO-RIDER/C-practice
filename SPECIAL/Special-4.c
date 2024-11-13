// C Program to Reverse a Stack using Recursion

#include <stdio.h>
#include <stdlib.h>

// Define the stack structure
typedef struct Stack {
    int top;
    unsigned capacity;
    int* array;
} Stack;

// Function to create a stack of given capacity
Stack* createStack(unsigned capacity) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Function to check if the stack is empty
int isEmpty(Stack* stack) {
    return stack->top == -1;
}

// Function to push an item to the stack
void push(Stack* stack, int item) {
    stack->array[++stack->top] = item;
}

// Function to pop an item from the stack
int pop(Stack* stack) {
    if (isEmpty(stack))
        return -1; // Return -1 if stack is empty
    return stack->array[stack->top--];
}

// Function to get the top item from the stack
int peek(Stack* stack) {
    if (isEmpty(stack))
        return -1; // Return -1 if stack is empty
    return stack->array[stack->top];
}

// Recursive function to insert an element at the bottom of the stack
void insertAtBottom(Stack* stack, int item) {
    if (isEmpty(stack)) {
        push(stack, item);
    } else {
        int temp = pop(stack);
        insertAtBottom(stack, item);
        push(stack, temp);
    }
}

// Recursive function to reverse the stack
void reverseStack(Stack* stack) {
    if (!isEmpty(stack)) {
        int temp = pop(stack);
        reverseStack(stack);
        insertAtBottom(stack, temp);
    }
}

// Function to print the stack
void printStack(Stack* stack) {
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->array[i]);
    }
    printf("\n");
}

// Driver program to test above functions
int main() {
    Stack* stack = createStack(5);
    
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);
    
    printf("Original Stack:\n");
    printStack(stack);
    
    reverseStack(stack);
    
    printf("Reversed Stack:\n");
    printStack(stack);
    
    return 0;
}
