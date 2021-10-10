#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);

    switch (num > 0)
    {
    case 1:
         printf("number is positive\n");
        break;
    
    case 0:
      switch (num < 0)
    {
        case 1:
        printf("Number is negative\n");
        break;
        case 0:
        printf("Number is zero\n"); 
    }
       break;
    }

    return 0;
}