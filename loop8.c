#include<stdio.h>
//write a c program of find sum of all odd numbers between 1 to n. 
int main()
{
    int i;
    int n;
    int sum;
    
    printf("The value of odd number:");
    scanf("%d", &n);

    for ( i = 1; i <= n; i += 2)
    {
        sum = sum+i;
    }
    printf(" The sum of all odd numbers between 1 to n: %d\n", sum);
    

    return 0;
}