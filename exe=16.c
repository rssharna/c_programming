#include<stdio.h>

int main()
{
    int num1;
    int num2;
    int sum = 0;

    scanf("%d %d", &num1,&num2);
     printf("value of num1 %% 5: %d and num2 %%5: %d\n",num1%5, num2%5);

    if(num1 % 5 == 0 < num2 % 5 == 0)
    {
    printf("sum of %d\n",num1+num2);
    } 
    return 0;
}