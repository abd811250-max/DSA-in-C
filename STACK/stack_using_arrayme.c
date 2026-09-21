#include <stdio.h>

#define MAX 100

struct stack {
    int arr[MAX];
    int top;
};

void push(struct stack *s, int value){
    if(s -> top == MAX - 1 ){
        printf("stack is overflow\n");
        return;
    }
    s -> top++;
    s -> arr[s -> top] = value; 
}

int pop(struct stack *s){
    if(s -> top == -1){
        printf("stack is empty");
        return -1;
    }
    int value = s -> arr[s -> top];
    
    s -> top --;
    return value;
}

void display(struct stack *s){
    if(s -> top == -1){
        printf("stack is empty\n");
    }
    for (int i = s -> top ; i >= 0 ; i --){
        printf("%d\n" , s -> arr[i]);
    }
}

int peek (struct stack *s){
    if(s -> top == -1){
        printf("stack is empty\n");
        return;
    }
    return s -> arr[s -> top];
}



int main(){
    int p;
    struct stack s ;
    s.top = -1 ;
    
    push (&s , 24);
    push (&s , 25);
    push (&s , 26);
    
    display(&s);
    printf("Peek element %d\n" , peek(&s));
    
    p = pop(&s);
    printf("After pop\n");
    printf("Pop element %d\n" , p);
    display(&s);
    
}