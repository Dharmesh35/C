#include<stdio.h>
int main()
{
    int n=1,r,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&r);
     
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
          printf("%d\t",n);
          n++;
        }
        printf("\n");
    }
    return 0;
}