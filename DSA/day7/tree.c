#include <stdio.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int val){
    struct Node *newNode = malloc (sizeof(struct Node));

    newNode -> data = val;
    newNode -> left = NULL;
    newNode -> right =NULL;
    return newNode;
}

struct Node *insert(struct Node *root , int val)
{
    if(root == NULL){
        return createNode ( val);

        int choice;
        printf("1. Insert Left\n");
        printf("2. Insert Right\n");

        printf("enter choice");
        scanf("%d", &choice);
        if(choice == 1){
            root -> left  = insert(root->left , val);
        }
        else if(choice==2){
            root -> right  = insert(root->right , val);
        }
        else 
        printf("invalid choice\n");

        return root;


    }
}
void preorder(struct Node *root){
    if(root == NULL)
    return NULL;

    printf("%d", root->data);
    preorder(root->left);
    preorder(root->right);

}

void postorder(struct Node *root){
    if(root == NULL)
    return NULL;

   
    postorder(root->left);
    postorder(root->right);
    printf("%d", root->data);

}

void inorder(struct Node *root){
    if(root == NULL)
    return NULL;

   
    inorder(root->left);
    printf("%d", root->data);
    inorder(root->right);
    

}



struct Node *deleteNode(struct Node *root , int val){
    if(root == NULL){
        return NULL;
    }
    if(root ->data = val ){
        free(root);
        return NULL;
    }
    root-> left = deleteNode(root -> left , val );
    root-> right = deleteNode(root -> right , val );
    return root;

}





int main(){





}