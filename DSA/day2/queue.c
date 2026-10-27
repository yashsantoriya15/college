#include <stdio.h>
#include <stdbool.h>

int arr[100];
int front = -1;
int rear = -1;

bool isEmpty(){
    return front == -1;
}

bool isFull(){
    return rear == 99;
}


int sizeOfQueue(){
    if(front == -1){
        return 0;
    }
    else{
        return rear - front + 1;
    }
}

void enque(int element){
    if(isFull()){
        printf("Queue Overflow");
        return ;
    }
    
    if(front == -1) front 
    rear ++;
    arr[rear] = element;
}
void display()

