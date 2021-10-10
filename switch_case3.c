#include<stdio.h>
//write a c program to check whether an alphabet is vowel of consonant using switch case.
int main()
{
    char ch;
    printf("Enter a letter\n");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
        printf("vowel\n");
        break;
    case 'e':
        printf("vowel\n");
        break; 
    case 'i':
        printf("vowel\n");
        break; 
    case 'o':
        printf("vowel\n");
        break; 
    case 'u':
        printf("vowel\n");
        break;             
    
    default:
         printf("The letter is consonant\n");
        break;
    }
    return 0;
}