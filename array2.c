#include <stdio.h>
int main (){
//say you are given the following array of integer data type-[-99,45,100,37,89,-327,245].
//Now write a program which will find the biggest integer and print the integer value.
int a[7]={-99,45,100,37,89,-327,245};
int max=a[0],i;

for(i=1; i<7;i++){
    if(a[i]>max)
    max=a[i];
}

 printf("max value is:%d\n", max);

    return 0;
}