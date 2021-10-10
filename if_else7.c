#include<stdio.h>
int main()
{ 
     char ch;
    printf("Enter a Alphabet");
    scanf("%c", &ch);
    if ((ch >='a') && (ch <= 'z'))
    {
        printf("The Character is alphabet\n");
        }
        else if ((ch >= 'A') && (ch <= 'Z'))
        {
            printf("The character is a alphabet\n");
        }
        else{
            printf("This is not a character");
        }
    return 0;
}