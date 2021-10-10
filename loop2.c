#include<stdio.h>
//write a c program to print all natural numbers in revers (from n to 1)
int main()
{
    int n;

    printf("Enter the natural number of n:");
    scanf("%d", &n);

    while (n>=1)
    {
        printf("%d\n", n);
        n--;
    }
    

return 0;
}