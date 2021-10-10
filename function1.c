#include<stdio.h>
double cube(double num);
// write a c program to find cube of any number using function.
int main()
{
    int num;
    double c;
    printf(" Enter any number:");
    scanf("%d", &num);

    c = cube(num);

    printf("cube of %d is %.2f\n", num, c);

    return 0;
}
double cube(double num)
{
    double c = num * num * num;

    return c;
}