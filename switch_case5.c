#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check even of odd\n");
    scanf("%d", &num);

    switch (num%2)
    {
    case 0:
         printf("number is Even\n");
        break;
    
    case 1:
        printf("Number is Odd\n");
        break;
    }

    return 0;
}