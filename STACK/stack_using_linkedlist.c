#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next; 
};

struct stack {
    struct node *top;
};

void push(struct stack *s, int data) {
    
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    
    if (newnode == NULL) {
        printf("Stack overflow...\n");
        return;
    }
    newnode->data = data;
    newnode->next = s->top;
    s->top = newnode;
}

int pop(struct stack *s) {
    
    if (s->top == NULL) {
        printf("Stack is Empty....\n");
        return -1;
    }
    
    struct node *temp = s->top;
    int value = temp->data;
    
    
    s->top = s->top->next;
    free(temp);

    return value;
}

void display(struct stack *s) {
    struct node *temp = s->top;
    

    if (s->top == NULL) {
        printf("Stack is Empty...\n");
        return;
    }
    
    printf("Elements in the stack......\n");
  
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int peek(struct stack *s) {

    if (s->top == NULL) {
        printf("Stack is empty......\n");
        return -1;
    }
    return s->top->data;
}


int main() {
    struct stack s;
    s.top = NULL; 
    
    push(&s, 23);
    push(&s, 24);
    push(&s, 25);
    
    display(&s);
    
    printf("Peek Element is %d\n", peek(&s));
    printf("Pop Element is %d\n", pop(&s));
    
    printf("After pop the stack....\n");
    display(&s);
    
    return 0;
}
