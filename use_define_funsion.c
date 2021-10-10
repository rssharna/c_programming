#include<stdio.h>
//write a C program to find five numbers even or Odd which given by user
void chcekOddOrEvent();
int main()
{

    for(int i=0;i<5;i++)
    {
        checkOddOrEvent();
    }

    return 0;
}
void checkOddOrEvent()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d is an even number\n",num);
    else
        printf("%d is odd number\n",num);

}

