#include<stdio.h>
int main()
{
    char letter;
    printf("Enter a lowercase letter\n"),
    scanf("%c", &letter);
    printf("upercase version is:%c\n", letter-32);

    return 0;
}