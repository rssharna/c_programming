#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    //ptr = (int *)calloc(5,sizeof(int));
    if(ptr==NULL){
        printf("Memory not allocated.\n");
    }
    else{
       printf("Memory allocated.\n");
    }
    

    return 0;
}