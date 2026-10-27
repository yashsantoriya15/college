#include <stdio.h>


int arr[5];
int front = -1;
int rear = -1;

bool isEmpty(){
    return front == -1;
}

bool isFull(){
    return (rear+1) % 5 == front;
}

void enqueRear(int element){
    if (isFull())
    {
        printf("Queue Overflow");
    }
    else{
        if(isEmpty()) front = 0;
        rear = (rear + 1) %  5;
        arr[rear] = element;
    }

}

void enqueFront(int element){
    if(isEmpty()){
        

    }
}

int dequeFront(){
    if (isEmpty())
    {
        printf("Queue underflow");
    }
    else {
        int val = arr[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else{
            front = (front +1) % 5;
        }
        
    }
}

int dequeRear(){
    if(isEmpty()){
        printf("under flow");
        return -1;
    }
    else {
        int val = arr[rear];
        rear--;
    }
}

void display(){
    if(front <= rear ){
        for (int i = front; i <= rear; i++){
            printf("Element = %d\n" , arr[i]);
        }
        }
    else{
            for(int i = front; i<5; i++){
                printf("Element = %d\n" , arr[i]);
            }
            for(int i = 0 ; i < front; i++){
                printf("Element = %d\n" , arr[i]);
            }
         }
}


int main(){

    enque(10);
    enque(20);
    enque(30);
    enque(50);
    enque(60);
    enque(70);
    enque(80);
    enque(90);
    display();
    
    return 0;
}
