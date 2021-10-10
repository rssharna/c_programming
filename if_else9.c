#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a alphabet");
    scanf("%c", & ch);

    if ((ch >= 'a' && ch <= 'z')||(ch >='A' && ch  <= 'z'))
    {
       printf("The alphabet is character");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The alphabet is digit");
    }
    else{
        printf("The alphabet is a special character\n");
    }
    return 0;
}