#include<stdio.h>
//write a c program to print all alphabets from a to z.
int main()
{
    char ch;

    printf("Alphabet from a to z:\n");

    for (ch= 'a'; ch <='z'; ch++)
    {
        printf("%c\n", ch);
    }
    


    return 0;
}
/*
int main()
{
    char ch='a';

    printf("Alphabet from a to z:\n");

    while (ch<='z')
    {
        printf("%c\n",ch);
        ch++;
    }
    


    return 0;
}
*/