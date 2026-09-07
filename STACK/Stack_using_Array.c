#include <stdio.h>

#define MAX 100
    
struct Stack
{
    int arr[MAX];
    int top;
};

// Initialize stack
void initStack(struct Stack *s)
{
    s->top = -1;
}

// Check if stack is empty
int isEmpty(struct Stack *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

// Check if stack is full
int isFull(struct Stack *s)
{
    if (s->top == MAX - 1)
        return 1;
    else
        return 0;
}

// Push element
void push(struct Stack *s, int value)
{
    if (isFull(s))
    {
        printf("Stack Overflow!\n");
        return;
    }

    s->top++;
    s->arr[s->top] = value;

    printf("%d pushed into stack.\n", value);
}

// Pop element
int pop(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack Underflow!\n");
        return -1;
    }

    int value = s->arr[s->top];

    s->top--;

    return value;
}

// Peek element
int peek(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty!\n");
        return -1;
    }

    return s->arr[s->top];
}

// Display stack
void display(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty!\n");
        return;
    }

    printf("Stack elements:\n");

    for (int i = s->top; i >= 0; i--)
    {
        printf("%d\n", s->arr[i]);
    }
}

int main()
{
    struct Stack s;

    initStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("\n");
    display(&s);

    printf("\nTop element = %d\n", peek(&s));

    printf("Popped element = %d\n", pop(&s));

    printf("\nAfter pop:\n");
    display(&s);

    return 0;
}