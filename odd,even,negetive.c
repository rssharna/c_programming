#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],count_even=0,count_odd=0,neg=0,i;
printf(" Enter the value in Array \n");
for(i=0;i<10;i++)
scanf("%d", &a[i]);
/* Calculating number of odd and even integer's */
for(i=0;i<10;i++)

{
if((a[i]%2 ==0))
count_even++;
if((a[i]%2==1))
count_odd++;
if(a[i]<0)
neg++;
}
/* display the number of odd and even integer's */
printf(" Total number of even integer are %d\n ",count_even);
printf("Total number of odd integer are %d\n", count_odd);
printf(" Total negative integer are %d", neg);
return 0;
}