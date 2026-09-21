#include<stdio.h>


void mergarray(int a[] , int n1 , int b[] , int n2 , int c[] ){
    
    int k = 0;
    
    for(int i = 0 ; i < n1 ; i++){
        c[k] = a[i];
        k++;
    }
    
    for(int j = 0 ; j < n2 ; j++){
        c[k] = b[j];
        k++;
    }
}

void traversal(int c[] , int n){
    for(int k = 0 ; k < n ; k++){
        printf("%d " , c[k]);
    }
}


int main(){
    int c[8] , n1 = 4 ,  n2 = 4;
    int a[] = {2,3,4,5};
    int b[] = {6,7,8,9};
    
    mergarray(a , n1 , b , n2 , c);
    printf("array are merg\n");
    
    printf("After merg arrays.......");
    traversal(c , n1 + n2);
    
    
    
}