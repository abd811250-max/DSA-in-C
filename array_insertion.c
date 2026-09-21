#include<stdio.h>

void display(int arr[], int n){
    for (int i = 0 ; i < n ; i++){
        printf("%d\n" , arr[i]);
    }
    printf("\n");
}

int insertelement(int arr[] , int element , int size , int capacity ,int index){
    if(size>=capacity){
        return -1;
    }
    for (int i = size - 1 ; i >= index ; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    
    return 1;
}


int main(){
    int arr[100] = {1,2,3,4,5};
    int element = 33, size = 5 , index = 4;
    display(arr , size);
    insertelement(arr , element, size , 100 , index);
    size += 1;
    display(arr , size);
    
    return 0;
}