#include<stdio.h>
void add()

int main()
{
    int a;
    printf("Enter a value:\n");
    scanf("%d", &a);

    if (a % 2 ==0)
{
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    

    return 0;
}

void add(int num1, int num2)
{
    int num1 = 5;
    int num2 = 8;
    int add = num1 + num2;

    printf("The adding number is:%d\n", add);

}
