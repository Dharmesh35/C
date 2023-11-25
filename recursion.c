#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


int fun(int n, int m)
{   
    if(m==0)
    return 1; 
    return  fun(n,m-1) * n ;
    
}

int main()
{
    int r = fun(5,10);
    printf("%d",r);
}

