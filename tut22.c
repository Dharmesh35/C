#include<stdio.h>
#include<stdlib.h>
int check_preorder(int arr[],int s,int n)
{
int max=s,ctr=0;
for(int i=s+1;i<=n && ctr!=1;i++)
{
if(arr[i]>arr[s])
{
max=i;
ctr++;
}
}
if(s<n)
{
for(int j=max+1;j<=n;j++)
{
if(arr[j]<arr[s])
{
return 0;
}
}
check_preorder(arr,s+1,max-1);
check_preorder(arr,max+1,n-1);
return 1;
}
}
int main()
{
int arr[]={2,4,1};
int n=sizeof(arr)/sizeof(arr[0]);
int ans=check_preorder(arr,0,n-1);
if(ans==1)
{
printf("true\n");
}
else
{
printf("false\n");
}
return 0;
}