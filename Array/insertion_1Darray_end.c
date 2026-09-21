#include<stdio.h>

int main(){
    int arr[4] = {2,3,4,5};
    int n = 4 , item;
    
    printf("Enter the value for insert at end of array :\n");
    scanf("%d" , &item);
    
    arr[n] =  item;
    n++;
    
    printf("After insertion array .........\n");
    
    for(int k = 0 ; k < n ; k++)
    {
        printf("%d " , arr[k]);
    }
    return 0 ;
}