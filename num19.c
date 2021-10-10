#include <stdio.h>
int main()
{
    double gpa;
    printf(" Enter your gpa(2.00-5.00):\n");

    scanf("%lf", & gpa);

    if( gpa<5.00)
   {
        printf("No\n");
   }
   else
   {
       printf("Yes\n");
   }
    return 0;
}