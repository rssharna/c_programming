#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two value\n");
    scanf("%d%d", &num1, &num2);

    switch (num1 > num2)
    {
    case 0:
         printf("number is maximum: %d\n", num2);
        break;
    
    case 1:
        printf("Number is maximumd: %d\n", num1);
        break;
    }

    return 0;
}