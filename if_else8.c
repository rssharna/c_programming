#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);

    if (ch=='a'||ch=='A'||ch=='I'||ch=='i'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='U'||ch=='u')
    {
        printf(" The alphabet is Vowel\n");
    }
    else{
        printf("The alphabet is Consonant\n");
    }
    

    return 0;
}