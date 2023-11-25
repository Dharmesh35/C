#include<stdio.h>
#include<stdlib.h>

struct complex
{
    int real;
    int img ;
};
 
void addition()

{
    int n,rsum=0,isum=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);

    struct complex num[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the Real part of number %d :",i+1);
        scanf("%d",&num[i].real);
        printf("Enter the img part of number %d :",i+1);
        scanf("%d",&num[i].img);
    }
    
    for(int i=0;i<n;i++) 
    {
        rsum += num[i].real;
        isum += num[i].img;
    }
    printf("Addition will be : %d + i %d ", rsum,isum) ;
    
}

int main()
{
    addition();
    return 0;
}