#include<stdio.h>
int main()
{ 
    int x;
    x = 5;
    int sum = 0;

    char str[20]="Print the value of";


    printf("%s x %d \n", str, x);

    int arr[30];
    arr[0]=5;
    arr[1]=8;
    arr[2]=9;
    arr[3]=35;
    arr[4]=23;
    arr[5]=18;

    printf("%s arr[3] %d\n", str, arr[3]);

    for(int i=0; i<=5; i++){
        //printf("arr[i]%d\n", arr[i]);
        //printf("%d\n", arr[i]);
        sum =sum + arr[i];


       }
        printf("%d\n:", arr[i]);
       


    return 0;
}
