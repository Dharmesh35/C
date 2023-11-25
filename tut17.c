
#include<stdio.h>
#include<conio.h>
#include<math.h> //because we have to use pow function
int main()
{
    int i;
    float x,d,p,r,res=0;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    d=(x-1)/x;
    //for-loop for seven terms
    //loop will start from second term
    //because first is already assigned via d=(x-1)/x
    for(i=2;i<=7;i++)
    {
        p = pow(d,i);
        r = p/2;
        res = res + r;
    }
    //for first term we have d=(x-1)/x
    res = d + res;
    printf("Result: %f",res);
}