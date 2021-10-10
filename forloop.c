#include<stdio.h>
int main()
//1+2+3+...........+n
{
  int sum=0;
  int i;
  int n;
  printf("Enter the value of n\n");
  scanf("%d", &n);

  for(i=0; i<=n; i++)
{
    sum= sum+1;
    printf("value of %d\n", i);
  
}
    printf("the value of sum%d", sum);
    printf("avg of sum:%f\n, avg");

    return 0;
}
