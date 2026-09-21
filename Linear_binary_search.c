#include<stdio.h>

int linearsearch(int arr[] , int size , int element){
    for (int i = 0 ; i < size ; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}


int binarysearch(int arr[] , int size , int element){
    int low , high ,mid;
    low = 0;
    high = size - 1;
    
    while (low <= high){
        mid = (high + low)/2;
        if (arr[mid] == element){
            return mid;
        }
        
        if (arr[mid] < element){
            low = mid + 1;
        }
        
        else{
            high = mid - 1;
        }
    }
    return  -1;
    
}


int main(){
    int arr[] = {1,3,5,6,7,4,8,9,10};
    
    int size = sizeof(arr)/sizeof(int);
    int element = 7;
    int searchindex = linearsearch(arr , size , element);
    
    printf("the element %d is found at index %d", element , searchindex);
    
}