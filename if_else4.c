#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);

    if (num%5==0 && num%11==0)
    {
        printf("The number is divisible by 5 and 11%d");
    }
    else{
        printf("The number is not divisible");
    }
    

    return 0;
}