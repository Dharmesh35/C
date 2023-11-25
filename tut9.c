//1st is multiple of 2nd number//
#include<stdio.h>
int main()
{
   int num1,num2 ;
   printf(" Enter the Numbers:");
   scanf("%d %d", &num1 , &num2);
   if(num1%num2==0)
    printf("%d is multiple of %d",num1,num2);
   else
   printf("These are not multiple of each other.");
   return 0;
}