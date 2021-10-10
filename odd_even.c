#include<stdio.h>
int main()
{
   int arr[20]={2,35,15,-2,6,-35,21,30,-34,10};

   for(int i=0; i<10; i++)
     
      if(arr[i]<0)
      {
        printf("%d is negetive number\n", arr[i]);
      }
      else if(arr[i]%2==0)
      {
        printf("%d is even number\n", arr[i]);
      }
      else if(arr[i]%2!=0)
      {
        printf("%d is odd");
      }

   

   return 0;
}