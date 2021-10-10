#include<stdio.h>
void atmcash(int m);
int main()
{
    int i;
    printf("enter the amount:\n");
    scanf("%d", &i);
    atmcash(i);


    return 0;
}
void atmcash(int m)
{   
   printf("money dispatch:%d\n",m);
}