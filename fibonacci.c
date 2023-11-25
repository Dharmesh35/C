#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int fib(int n)
{
  int a=0,b=1,s=0,i;
  /* Returning the value of n if it is less than or equal to 1. */
  if(n<=1)
  return n;

 /* Calculating the fibonacci series. */
  for(i=2;i<=n;i++)
  {
    s=a+b;
    a=b; 
    b=s;
    
  }
  return s;
}

int rfib(int n) 
{
   if(n<=1)
  return n;
  return rfib(n-2)+rfib(n-1);
}

int f[10];

int rmfib( int n)
{
   if(n<=1)
   {
    f[n]=n;
    return n;
   }
  

  else
  {
    if(f[n-2]==-1)
      f[n-2]=rmfib(n-2);

    if(f[n-1]==-1)
      f[n-1]=rmfib(n-1);

    return f[n-2]+f[n-1];
  }

}



int main()
{
  for( int i=0 ;i<=5;i++)
  f[i]=i;

  printf("%d",rmfib(5));
  return 0;

}