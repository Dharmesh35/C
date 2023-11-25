//factorial//
#include<stdio.h>
int main()
{
    int no,fact,i;
    printf("Enter The Number: ");
    scanf("%d",&no);
    fact=i=1;
    while(i<=no)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of the %d :%d",no,fact);
    return 0;
} 