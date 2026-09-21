#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

// To display the list Element:-
void linklistTraversal(struct Node * ptr){
    
    while (ptr != NULL)
    {
        printf("Element : %d\n" , ptr -> data);
        ptr = ptr -> next;
    
    }
}

// Insert the Node at first:-
struct Node * insertatfirst(struct Node * head, int data){
        struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
        ptr -> next = head;
        ptr -> data = data;
        
        return ptr;
}

// Inset the Node at index:-
struct Node * insertatindex(struct Node * head , int data , int index){
        struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
        struct Node * p = head;
        
        int i = 0;
        
        while  (i != index-1){
            p =  p -> next;
            i++;
        }
        ptr -> data = data;
        ptr ->  next = p -> next;
        p -> next = ptr;
        return head;
}

// inset node at the end:index-1
struct Node * insertatend(struct Node * head, int data ){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node)); 
    struct Node * p = head;
    ptr -> data = data;
    
    while (p -> next != NULL){
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> next = NULL;
    return head;
}

// insertion after node :-
struct Node * insertafternode(struct Node * head , struct Node * prinode, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr -> data = data;
    
    ptr -> next = prinode -> next ;
    prinode -> next = ptr;
    return head;
}


int main() {
    struct Node * head;
    struct Node * first;
    struct Node * second;
    struct Node * third;
    
    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    
    head -> data = 7;
    head -> next = first;
    
    first -> data = 5;
    first -> next = second;
    
    second -> data = 3;
    second -> next = third;
    
    third  -> data = 2;
    third  -> next = NULL;
    
linklistTraversal(head);
// Insert node at first :-
// head = insertatfirst(head,45);
// head = insertatindex(head, 67 , 1);
//  head =  insertatend(head, 65);
head = insertafternode(head, first , 45);

linklistTraversal(head);
    
return 0;
}

