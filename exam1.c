#include<stdio.h>
int add_digits(int limit)
{
    int sum = 0;
    for(int i=0; i<limit; i++)
    {
        sum = sum + i;
    }

    return sum;
}
int main()
{
    int sum = add_digits(5);
    printf("%d", sum);

    return 0;
}

