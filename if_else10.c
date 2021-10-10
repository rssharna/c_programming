#include<stdio.h>
//Write a C program to check whether a character is uppercase or lowercase alphabet.

int main()
{
    char ch;
    printf("Enter a Character:");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The character is lower case\n");
    }
    else if(ch>= 'A' && ch<= 'Z')
    {
        printf("The character is lower case\n");
    }
    


    return 0;
}