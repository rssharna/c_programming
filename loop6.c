#include<stdio.h>
// write a c program to find sum of all natural numbers between 1 to n
int main()
{
    int i=1;
    int n;
    printf(" Enter the value of n:");
    scanf("%d", &n);

    int sum =0;

    for ( i = 1; i <=n; i++)
    {   
        sum = sum + i; 
        
    }
    printf("The sum is: %d\n",sum);

    

    return 0;
}