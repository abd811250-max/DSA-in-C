#include<stdio.h>

int main(){
    int arr [10] = {2,3,4,5,6};
    int k , item , n = 5 ;
    
    printf("Enter the index to insert :\n");
    scanf("%d", &k);
    
    printf("Enter the insert number :");
    scanf("%d", &item);
    
    int j = 5;
    while (j >= k){
        arr[j+1] = arr[j];
        j --;
    }
    
    
    arr[k] = item;
    n++ ;
    printf("After insertion array......");
    for (int j = 0 ; j < n ; j ++ ){
        printf(" %d ", arr[j]);
    }
    return 0;
}