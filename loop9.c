#include<stdio.h>
// write a c program to print multiplication table of any number.
int main()
{
    int i, num;
    printf("Enter number to print table: ");
    scanf("%d", &num);

    for(i = 1; i <= 10; i++)
    {
      printf("%d*%d =%d\n", num, i,(num*i));
      
    }

    return 0;
}