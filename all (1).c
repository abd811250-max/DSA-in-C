#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
    
};

void traversal(struct Node * top){
    while(top != NULL){
        printf("element is %d\n" , top -> data);
        top = top -> next;
    }
}

int isempty(struct Node * top) {
    if(top == NULL)
        return 1;
    else ;
        return 0;
}

int isfull(struct Node * top){
    struct Node * p = (struct Node *)malloc(sizeof(struct Node));
    if(p == NULL){
        return 1;
    }
    else{
        return 0;
    }
    
}

struct Node *push (struct Node * top , int x){
    if (isfull(top)){
        printf("Stack is over flow\n");
    }
    
    else{
        struct Node * n = (struct Node *)malloc(sizeof(struct Node));
        n -> data = x;
        n -> next = top;
        top = n;
        return top;
    }
}





int main(){
    struct Node * top = NULL;
    top = push(top, 4);
    top = push(top , 4);
    traversal(top);
    return 0 ;
}