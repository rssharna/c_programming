#include <stdio.h>
//leap year

int main()
{
    int year;
    scanf("%d", &year);

    if (year % 400 == 0 || 
    ( year % 100 != 0 && year % 4 == 0))
        printf("%d is Leap year\n", year);
    
    else
        printf("%d is not leap year\n",year);

    return 0;
}