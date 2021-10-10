
#include<stdio.h>
int main()
{
    void input();
    void add();
    void odd_even();
    void sum();
    void swap();
    void pos();
    void letter();
    void leap_year();
    void large();
    void main10();
    void digt();
    void find_odd_even();
    void factorial();
    void avg();
    void divisor15()
    void divisibke();
    void lowercase();
    void oparator18()
     void max1();
     void list20();
     void prod();
     void nCr22();
     void rev();
     void palondrome24();
     void patt();
     void patt2();
     void prime27();
     void fibo28();
     void maxhigh();
     void minismall();
     void lineararray();
     void binaryarray32();
     void reversearray();
     void insertelement();
     void delete35();
     void addmatrices();
     void str40();

     





    return 0;
}
//write a c program to get an input from kebord and print it
void input()
{
    printf("My first c program\n");

}

//write a c program to get two numbers from keyboard and add them. 
void add()
{
    int a = 5;
    int b = 8;
    int add = a+b;

    printf("The adding number is:%d\n", add);

}
*/

//write a c program to check an integer whether odd or even.
void odd_even()
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

}

//write a c program to perfrom addition, subtraction, multiplication and division.
void sum()
{
    int a =20;
    int b = 5;

    printf("The result of addition is: %d\n", a+b);
    printf("The result of subtraction is: %d\n", a-b);
    printf("The result of multiplication is: %d\n", a*b);
    printf("The result of division is: %d\n", a/b);

}

//write a c program to swap two numbers.
void swap()
{
    int num1=10;
    int num2=5;
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("num1= %d\n",num1);
    printf("num2= %d\n",num2);
    
}

//write a c program to check wheter a given interger is positive.
void pos()
{
    int a;
    printf("Enter a value:\n");
    scanf("%d", &a);

    if (a % 2==0)
    {
        printf("the number is positive\n");
    }
    else{
        printf("The number is nagetive\n");
    }
}

//write a c program to check whether input alphabet is a vowel of not.
 void letter()
{
    char ch;
    printf(" Enter a letter\n");
    scanf("%c", &ch);

    if ((ch == 'a') || (ch == 'e')|| (ch == 'i') || (ch == 'o') || (ch == 'u'))
    {
        printf("The letter is Vowel\n"); 
    }
    else{
        printf("The letter is Consonant\n");
    }
    
}

//write a c program to check a leap year. 
void leap_year()
{
    int year;
    printf("Enter a year\n");
    scanf("%d", &year);
    if ((year%100==0) || (year%400==0) || (year%4==0))
    {
        printf("Leap year\n");
    }
    else{
        printf("This year is not leap year\n");
    }
}

//Find the largest number of 3 numbers
void large()
{
    int a = 4;
    int b = 8;
    int c = 2;

    if ((a<b)|| (b>c))
    {
        printf("The largest number is:%d\n", b);
    }
    else if ((a>b)||(c<a))
    {
        printf("The largest number is: %d\n", a);
    }
    else{
        printf("The Largest number is:%d\n", c);
    }
    
}

//write a c program  to solve the quadratic equation.
void main10()
{

    
}


// 11. write a c program to display  the consecutive digit 0,1,2....9.
void digt()
{ 
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }
    
}

//12.write a c program to find the sum of odd and even numners for 1 to n,
void find_odd_even()
{ 
    int i, n;
    printf("Ente the value of n:");
    scanf("%d", &n);

     for (i = 0; i < n; i++)
     {
        if(i%2==0)
        {
            printf("Even numbes are:%d\n", i);
        }
     }  
     printf("\n");
        for(i = 0; i<n; i++)
        {
            if(i%2!=0)
            {
            printf("Odd numbers are: %d\n",i);
            }
        }
     

    
}

//13. write a c program to calculate factorial of a number.
void factorial()
{
    int i, f=1, num;

    printf("Enter a number:\n");
    scanf("%d", &num);
    
    for ( i = 0; i < num; i++)
         f = f*i;
    {
        printf("Factorial of %d is: %d\n", num, f);
    }

    
}

//14. write a c program to find the average of a list of number.
void avg()
{
    float a,b,c,avg;
    printf("Enter the numbers\n");
    scanf("%f%f%f", &a,&b,&c);

    avg = (a+b+c)/3;
    printf("The average number is:%.2lf\n", avg);
}

//15. write a c program to find the greates common divisor and least common multiple of two numbers.
void divisor15()
{

    return 0;
}

//16. write a c program to find the number of integers divisibke by 5 between the given range num1 and num2, where num1<num2. Also find the sum of all these integer numbers which are divisible by 5 and disply the total.
void divisibke()
{
    int num1;
    int num1;
    int sum = 0;

    prinf("Enter the values:\n");
    scanf("%d%d", &num1, &num2);
     printf("")
}

// 17. write a c program to convert 1 line of lowercase text to uppercase.
void lowercase()
{
    char letter;
    printf("Enter a lowercase letter:");
    scanf("%c", &letter);

    printf("The upercase version is: %c\n", letter-32);

}

//18. write a program that asks user an arithmetic operator('+','-','*' or '/') and two operands and perform the corresponding calculation on the operands.
void oparator18()
{

    
}
// 19. write a c program to find the average of maximam of N positive numbers enterred by user. but if the input is negative, display the average(excludig the average of negative input) and end the program. 
void max1()
{
    int i;
    int n;
    int avg;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        printf("Positive numbers are:\n", i);
        
    }
    avg = 
    printf("The average number is:%f\n" avg);

}

// 20. to find  the average of a list of positive numbers only. If user enters negative number skip it.
void list20()
{


   
}

//21.write a c program to find the product of N integers entered by user. If user enters 0 skip it.
void prod()
{
    int n;
    printf("Enter the value of product:");
    scanf("%d", &n);
    if (n>0)
    {
        printf("Find the product\n");
    }
    else{
        printf("skip it and enter a number without 0\n");
    }
    
}

//22. c program to find nCr and nPr: This code calculate nCr which is n!/(r!*(n-r)!) and nPr = n!/(n-r)!

void nCr22()
{



}

//23. write c program to reverse a number.
void rev()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};


    for (int i = 10; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    
}

//24. write c program to check Palindrome number: A palindrome number is a number such that if we reverse it, it will not change.
void palondrome24()
{


    
}

// 25. write a c program to print patterns of numbers and starts
void patt()
{
    int i,j, rows;
    printf("Enter the rows number: ");
    scanf("%d", &rows);

    for ( i = 1; i <= rows; i++)
    {
        for ( j = i; j < rows; j++)
        {
            printf(" ");
        }
        for ( j = 1; j <=(2*i-1); j++)
        {
            printf("*");
        }
        
        printf("\n");
        
    }
    
}

//26. write a c program to print the diamond patterns of stars.
void patt2()
{
    printf("  *  \n");
    printf(" *** \n");
    printf("*****\n");
    printf(" *** \n");
    printf("  *  \n");

}



// 27. write a c program to find a list of prime numbers.
void prime27()
{

    
}

// 28. write a c program to find  the fibonacci series  in c programming: c Program for Fibonacci series with out and with recursion.
void fibo28()
{

    
}

//29. write a c program to find the maximum or highest element in array.
void maxhigh()
{
    int arr[5]={2,8,4,7,9};
    int max= arr[0],i;
    
    for ( int i = 0; i < 5; i++)
    {
        if (arr[i]> max)
            max= arr[i];
        
        
    }
    printf("maximum /Highest valu is: %d\n", max);
    
}

//30. write a c program to find the minimum or smallar element in array.
void minismall()
{
    int arr[5]={2,8,4,7,9};
    int muni= arr[0],i;
    
    for ( int i = 5; i < 0; i++)
    {
        if (arr[i]> muni)
            muni= arr[i];
        
        
    }
    printf("munimum /smaller valu is: %d\n", muni);
    


    
}

//31. write a c program to find and item from an array by Linear search.
void lineararray()
{
    int a[20], i, n;
    printf("Enter the array element:");
    scanf("%d", &n);

    printf("Enter the element of arry:")
    scanf("%d", &a[20]);

    for ( i = 0; i < n; i++)
    {
        if
    }
    


    
}

//32. write a c program to find an item from an array by binary search.
void binaryarray32()
{

   
}

//33. write c program to reverse array.
void reversearray()
{
    int a[10]={1,3,5,7,9,2,4,6,8,10};
    
    for (int i = 10; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
    
}

// 35. write a c program to insert an element into an array.
void insertelement()
{
    int a[5]={3, 4, 6,5,7};
    int num, size, pos;

    printf("Enter the size: ");
    scanf("%d", &num);

    printf("Enter a element for insert: ");
    scanf("%d", &num);

    printf("Enter a element for position: ");
    scanf("%d", &pos);

    if (pos> size+1 || pos<=0)
    {
        printf(" invalid position! please enter position between 1 to %d\n", size)
    }
    else{
        for ( int i = size; i > pos; i--)
        {
            a[i] = a[i-1];
        }
        a[pos-1]= num;
        size++;
        printf("Array elements after insetion: ");
        for ( i = 0; i < size; i++)
        {
            printf(" %d\t", a[i]);
        }
        
        
    }
    

    turn 0;
}

//35. write a c program to delete an element from an array.
void delete35()
{

    return 0;
}

//36. Write a c program to add two matrices.
void addmatrices()
{
    int a[3][3], i, j;
    int sum=0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; i < 3; j++)
        {
            printf("Enter the value of two martrices: ");
            scanf("%d", &a[i][j]);
        }
        
    }
     for ( i = 0; i < 3; i++)
    {
        for ( j = 0; i < 3; j++)
        {
            printf("%d", a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
        
    }
    printf("add: %d\n", sum);
    
}

//40. write a c program to print a string.
void str40()
{
    char name[10] = "Sharna";
    printf("%s\n", name);

   
}


/*
#include<stdio.h>
#include<string.h>

// 41. write a c program to print length of string.
int main()
{
    char str[100];
    int i = 0, length = 0;
     printf("Enter your name:\n");
     scanf("%s", str);

     
     while (1)
     {
         if (str[i]=='\0')
         {
            break;
         }
         else{
             i++;
             length++;
         }
         
     }
     
     printf("length of name is:%d\n", length);
     

    return 0;
}

*/

/*
#include<stdio.h>
#include<string.h>
//42.write a c program to compare two string.

int main()
{

    return 0;
}


#include<stdio.h>
#include<string.h>
//43. write a c program to copy a string.

int main()
{

    return 0;
}

#include<stdio.h>
#include<string.h>
//44. write a c program to concatenate two string.

int main()
{

    return 0;
}