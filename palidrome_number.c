#include<stdio.h>
int main()
{
    int n,c,sum=0,r;
    printf("Enter a number\n");
    scanf("%d",&n);
    
    c=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("%d\n",sum);

    if(sum==c)
    printf("Number is Palidrome\n");
    else
    printf("Not Palidrome\n");
    return 0;
}
