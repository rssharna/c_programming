#include<stdio.h>
int main()
{
    int num1,num2,num3;

    printf("Enter three number\n");
    scanf("%d%d%d", &num1, &num2,&num3);

    if (num1<num2<num3)
    {
        printf("%d is maximum", num1);
    }
    if (num1<num2>num3)
    {
        printf("%d is maximum", num2);
    }
    if (num1<num2<num3)
    {
        printf("%d is maximum",num3);
    }  

    return 0;
}