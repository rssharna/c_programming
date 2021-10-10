#include<stdio.h>
//C program to check whether a triangle is valid or not if its sides are given
int main()
{
    int side1, side2, side3;
    printf("Enter the sides of triangle\n");
    scanf("%d%d%d", &side1, &side2, &side3);

    if (side1+side2>side3)
    {
        printf("The Triangle is valid");
    }
    else if (side1+side3>side2)
    {
        printf("The Triangle is valid");
    }

    else if (side2+side3>side1)
    {
        printf("The Triangle is valid");
    }    
    else{
        printf("The Triangle is invalid");
    }


    return 0;
}