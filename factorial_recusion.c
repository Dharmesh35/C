// factorial by using recursion
#include<stdio.h>

int factorial(int number)
{
    if( number == 1 || number == 0 )
    {
        return 1;
    }
    else 
    {
        return( number* factorial(number-1));
    }
}


int main()
{
    long num;
    printf("Enter the number");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,factorial(num));
    return 0;
}

