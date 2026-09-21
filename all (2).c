#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
    
};

struct stack{
    struct Node * top;
    int size;
    int capacity;
} ;

void push(struct stack * s , int data){
    
    if (s->size == s-> capacity){
        printf("i am sorry\nstack is full.....");
    }
    struct Node * n = (struct Node *)malloc(sizeof(struct Node));
    
    if (n == NULL){
        printf("Node is allocated...");
    }
    
    n -> data = data;
    n -> next = s -> top;
    s -> top = n;
    s -> size++;
    
    printf("%d is pushed into stack\n", data);
}

void pop(struct stack *s){
    
    if(s -> size == 0){
        printf("stack is under flow....");
    }
    struct Node *temp = s -> top;
    s -> top = s -> top -> next;
    free(temp);
    s -> size --;
    
    printf("Pop is succesfull...");
}

void peek(struct stack *s){
    
    if ( s -> size == 0){
        printf("realy sorry for that\nStack is empty.... ");
    }
    printf("Peek element in this stack is %d" , s -> top -> data);
}

void display(struct stack *s){
    
    if (s -> size == 0){
        printf("Stack is empty.....");
    }
    struct Node *temp = s -> top;
    
    printf("Stack elements...\n");
    while(temp != NULL){
        printf(" %d\n" , temp -> data );
        temp = temp -> next;
    }
}

void sizestack(struct stack *s){
    printf("size of stack %d" , s -> size);
   
}

int main(){
    struct stack s;
    
    s.top = NULL;
    s.capacity = 4;
    s.size = 0;
    
    printf("capacity of stack is %d\n" , s.capacity);
    
    push(&s, 45);
    push(&s, 98);
    push(&s, 43);
    push(&s, 87);
    
    printf("\n");
    
    display(&s);
}


