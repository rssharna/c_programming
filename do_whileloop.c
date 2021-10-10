#include<stdio.h>
// write a c program for print 100, 95, 90,85.......0
int main()
{
    int i;
    i = 100;
    do
    {
        printf("%d\n", i);
        i = i-5;
    } while (i>=0);
    


    return 0;
}