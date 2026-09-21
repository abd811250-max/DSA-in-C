#include<stdio.h>
#include<stdlib.h>


struct array{
    int tota_size;
    int used_size;
    int * ptr;
};

void createarray(struct array * a, int tsize , int usize){
    a -> tota_size =tsize;
    a -> used_size = usize;
    a -> ptr = (int *)malloc(tsize * sizeof(int));
}

void show(struct array * a){
    for (int i = 0 ;i < a -> used_size ; i++)
    {
        printf("%d\n" , (a -> ptr)[i]);
    }
}

void setvalue(struct array * a){
    int n;
    for (int i = 0 ; i < a -> used_size ; i++){
        printf("Enter element in array - %d\n" , i);
        scanf("%d" , &n );
        (a -> ptr)[i] = n;
    }
    
}

int main(){
    struct array a;
    
    createarray(&a, 10 , 5);
    setvalue(&a);
    printf("The elements in the array are : \n");
    show(&a);
    
    
    
    return 0;
}