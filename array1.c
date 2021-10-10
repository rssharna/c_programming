#include <stdio.h>
int main()
{
//take an array of integer data type of size 10. Get input from user and store the values in the array
 //and finally print the sum of those 10 integers.
 int a[10],i, sum;

 printf("Enter the value of array\n");
 for(i=0; i<10; i++){
     scanf("%d", &a[i]);
 }
 for(i=0; i<10;i++){
    sum= sum+a[i];
 }
    printf("Sum of the array:%d\n",sum);
    return 0;
}
