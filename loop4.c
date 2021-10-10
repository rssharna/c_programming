#include<stdio.h>
//write a c program to print all even number between 1 to 100.
int main()
{
    int i = 1;

    while (i<=100)
    {
    if(i%2==0)
    {
        printf("Even numbers are%d:\n", i);
    }i++;

    }
    return 0;
}
/*
int main()
{
    for(int i=1; i<=100; i++)
    {
        if(i%2==0)
        {
            printf("The Even numbers are:%d\n", i);
        }
    }


    return 0;
}
*/