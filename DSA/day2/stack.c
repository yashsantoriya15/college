// #include <stdio.h>
// #include <stdbool.h>

// int arr [100];
// int top = -1;

// bool isEmpty() {

//     return top == 99;
// }

// int sizeofstack() {
//     return top + 1;
// }
// void push(int element)
// {
//     if(isfull()) {
//         printf("Stack Overflow");
//         return;
//     }
//     top++;
//     arr[top] = element;
// }
// int pop () {
//     if(isEmpty()) {
//         printf(" stack underflow");
//         return -1;
//     }
//     int val = arr[top];
//     top --i;
// } return val
// void display(){
//     for (int i = top; i >= 0; i--)
// }

#include <stdio.h>
#include <stdbool.h>

int arr[100];
int top =-1;

bool isEmpty(){
    return top== -1;
}

bool isFull(){
    return top == 99;
}

int sizeOfStack(){
    return top + 1;
}

void push(int element){
    if(isFull()){
        printf("Stack overflow\n");
        return ;
    }
    top++;
    arr[top] = element;
}

int pop(){
    if(isEmpty()){
        printf("stack underflow");
        return -1;
    }
    
    int val = arr[top];
    top--;
    return val;
    
}

int peek(){
    if(isEmpty()){
        printf("stack underflow");
        return -1;
    }
    
    int val = arr[top];
    
    return val;
    
}

void display(){
    for(int i = top; i >= 0; i--){
        printf("Element: %d", arr[top]);
    }
}

int main(){
    push(10);
    push(20);
    isEmpty();
    isFull();
    pop();
    peek();
    display();

    return 0;
}
