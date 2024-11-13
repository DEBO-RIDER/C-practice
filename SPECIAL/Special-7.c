// C program to copy a singly linked list .

#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to append a node to the linked list
void appendNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to copy a linked list
struct Node* copyList(struct Node* head) {
    if (head == NULL) {
        return NULL;
    }
    struct Node* newHead = createNode(head->data);
    struct Node* current = head->next;
    struct Node* newCurrent = newHead;
    
    while (current != NULL) {
        newCurrent->next = createNode(current->data);
        newCurrent = newCurrent->next;
        current = current->next;
    }
    
    return newHead;
}

int main() {
    struct Node* head = NULL;

    // Append nodes to the original linked list
    appendNode(&head, 1);
    appendNode(&head, 2);
    appendNode(&head, 3);
    appendNode(&head, 4);

    printf("Original List:\n");
    printList(head);

    // Create a copy of the linked list
    struct Node* copiedList = copyList(head);

    printf("Copied List:\n");
    printList(copiedList);

    return 0;
}
