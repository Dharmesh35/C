#include<stdio.h>
int main()
{
  int r,i, n,sum=0;
  printf("enter the number:");
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
      r=n%i;
      if (r==0)
      {
        sum=sum+i;
      }
  }
  if(sum==n)
  printf("Prefect number");
  else
  printf("no");
  return 0;
}