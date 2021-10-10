#include<stdio.h>
//write a c program to print all natural from 1 to n.
int main()
{
    int n;
    printf("Print all nutural number from 1 to:");
    scanf("%d", &n);

    int i=1;

    while (i<=n)
    {
        printf("%d\n", i);
        i++;
    }
    

}