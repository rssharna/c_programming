#include<stdio.h>
//c program to check whether a triangle is valid or not if angles are given.
int main()
{
    int angle1, angle2, angle3, sum;
    printf("Entert the angles of traiangle\n");
    scanf("%d%d%d", &angle1, &angle2, &angle3);
    sum = angle1+angle2+angle3;

    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        printf(" Triangle is valid\n");
    }
    else
    {
        printf("Triangle is not valid\n");
    }

    return 0;
}