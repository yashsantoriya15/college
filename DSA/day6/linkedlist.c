#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

struct Node* createNode(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertBeginning(int value) {
    struct Node *newNode = createNode(value);
    newNode->next = head;
    head = newNode;
    printf("Inserted %d at the beginning.\n", value);
}

void insertEnd(int value) {
    struct Node *newNode = createNode(value);
    if (head == NULL) {
        head = newNode;
        printf("Inserted %d at the end (as first node).\n", value);
        return;
    }
    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    printf("Inserted %d at the end.\n", value);
}

void insertPosition(int value, int pos) {
    if (pos < 1) {
        printf("Invalid position!\n");
        return;
    }
    if (pos == 1) {
        insertBeginning(value);
        return;
    }
    struct Node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }
    struct Node *newNode = createNode(value);
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Inserted %d at position %d.\n", value, pos);
}

void deleteBeginning() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct Node *temp = head;
    head = head->next;
    printf("Deleted %d from the beginning.\n", temp->data);
    free(temp);
}

void deleteEnd() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    if (head->next == NULL) {
        printf("Deleted %d from the end.\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    struct Node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    printf("Deleted %d from the end.\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

void deletePosition(int pos) {
    if (pos < 1 || head == NULL) {
        printf("Invalid position or empty list!\n");
        return;
    }
    if (pos == 1) {
        deleteBeginning();
        return;
    }
    struct Node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position!\n");
        return;
    }
    struct Node *del = temp->next;
    temp->next = del->next;
    printf("Deleted %d from position %d.\n", del->data, pos);
    free(del);
}

void display() {
    struct Node *temp = head;
    if (temp == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int choice, value, pos;
    do {
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at position\n");
        printf("4. Delete from beginning\n");
        printf("5. Delete from end\n");
        printf("6. Delete from position\n");
        printf("7. Display list\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertBeginning(value);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insertEnd(value);
                break;
            case 3:
                printf("Enter value and position: ");
                scanf("%d %d", &value, &pos);
                insertPosition(value, pos);
                break;
            case 4:
                deleteBeginning();
                break;
            case 5:
                deleteEnd();
                break;
            case 6:
                printf("Enter position: ");
                scanf("%d", &pos);
                deletePosition(pos);
                break;
            case 7:
                display();
                break;
            case 0:
                printf("Program ended.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 0);
    return 0;
}