//Rokshana Sharmin
//Id:21212
#include<stdio.h>

int main()
{
    //Ans for problem 1

    for(int i = 1; i <= 150; i++)
    {
        if(i%3 == 0 && i%5 == 0)
        {
            continue;
        }
        if(i%3 == 0 || i%5 == 0)
        {
            printf("%d ", i);
        }

    }

    return 0;
}