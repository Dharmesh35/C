#include<stdio.h>
int main()
{
    int arr[50],n,i;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("enter the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
       int t;
       int z=0;
      for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            t=arr[i];
            arr[i]=arr[z];
            arr[z]=t;
            ++z;
        }
    } 
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    }