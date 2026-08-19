#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

void linklisttraversal(struct Node * head){
       struct Node * p = head;
    
    do{
    
        printf("Element is %d\n" , p->data);
        p = p -> next;
    
    } while(p != head);
}

struct Node * insertatfirst(struct Node * head , int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    ptr -> data = data;
    
    while(p -> next != head){
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> next = head;
    head = ptr;
    return head;
}

struct Node * insertatindex(struct Node * head , int index , int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    ptr -> data = data;
    
    int i = 0;
    while(i != index - 1){
         p = p -> next;
         i++;
    }
    ptr -> next = p -> next;
    p -> next = ptr;
    return  head;
    
}

struct Node * insertatend(struct Node * head , int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    ptr -> data = data;
    
    while (p -> next != head){
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> next = head;
    return head;
}

struct Node * insertafterNode(struct Node * head ,struct Node * prinode , int data ){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = data;
    
    ptr -> next = prinode -> next;
    prinode -> next = ptr;
    return head;
}

int main(){
    
    struct Node * head ;
    struct Node * first ;
    struct Node * second ;
    struct Node * third ;
    
    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    
    head -> data = 45;
    head -> next = first;
    
    first -> data = 54;
    first -> next = second;
    
    second -> data = 45;
    second -> next = third;
    
    third -> data = 45;
    third -> next = head;
    
 linklisttraversal(head);
 printf("After insertion\n");
//  head = insertatfirst(head, 33);
//  head = insertatindex(head , 2 , 55);
// head = insertatend(head , 99);
head = insertafterNode(head, first , 88);
 linklisttraversal(head);
 

    
return 0;
}

