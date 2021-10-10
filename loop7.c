#include<stdio.h>
// write a c program to find sum of all even numbers between 1 to n.
int main()
{
    int i, n;
    int sum=0;
    printf("Enter the value of n:");
    scanf("%d", &n);
    
    for ( i = 2; i <= n; i+=2)
    {
        sum = sum +i;
    }
    printf("The sum of all even numbers between 1 to n: %d\n", sum);
    

    return 0;
}