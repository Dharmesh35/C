#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("%d,%d\n",x,y);
}
int main()   
{
    int a=10,b=20;
    swap(&a,&b);
    printf("%d,%d",a,b);

}