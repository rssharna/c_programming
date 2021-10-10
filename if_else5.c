#include<stdio.h>
//write a c program to check whether a number is even or odd.

int main()
{
    int num;
    printf("Enter a number");
    scanf("%d", & num);

    if (num % 2==0)
    {
    printf("The number is even\n");
    }
    else{
        printf(" The number is odd\n");

    }
    

    return 0;
}
