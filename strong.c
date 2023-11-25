#include<stdio.h>
int factorial(int num)
{
    int i=1,fact=1;
    for( i=1;i<=num;i++)
    fact=fact*i;
    return fact;
}

int strong(int n)
{
    int r,sum=0,temp=n;
    while(n)
    {
      r=n%10;
      sum=sum+factorial(r);
      n=n/10;
    }   
    if (sum==temp)
       return 1;
    else 
      return 0;
}

int main()

{
    int N;
    printf("Enter the number:");
    scanf("%d",&N);
    if (strong(N))
      printf("Yes it is a strong number\n");
   else
      printf("no it is not a strong number\n");
   return 0;
}