#include<stdio.h>
int main()
{
    int num1;
    int num2;

    printf("Enter two number\n");
    scanf("%d%d", &num1, &num2);


    if(num1>num2){
        printf("%d is maximum\n", num1);
    }
    else if(num1<num2){
        printf("%d is maximum\n", num2);
    }
     if(num1==num2){
        printf("both are equel");

    }

    return 0;
}