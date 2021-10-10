#include<stdio.h>
//write a c program to print Odd numbers from 0 to 100. 
int main()
{
    int i=0;
    while (i<100)
    {
        if(i%2!=0){
            printf("Odd number is: %d\n", i);
        }
        i++;
    }
    
    


    return 0;
}
/*
int main()
{
    int i=0;
    for ( i = 0; i < 100; i++)
    {
        if (i%2!=0)
        {
            printf(" Odd number is : %d\n", i);
        }
        
    }
    


    return 0;
}
*/