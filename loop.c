#include<stdio.h>
int main()
{
    int n=1;
    while(n<=100){
        printf("%d\n", n);
        n=n+1;
    if(n%2==0){
        break;
    }

    }
    return 0;
}