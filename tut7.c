// sum avg product largest smallest of 3 numbers//
#include<stdio.h>
int main()
{
    int num1,num2,num3,sum,avg,pdt;
    printf("Enter the Numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    printf("sum of the Numbers is %d\n",sum);
    avg=sum/3;
    printf("Average of the numbers is %d\n",avg);
    pdt=num1*num2*num3;
    printf("product of the numbers is %d\n",pdt);
    if(num1>num2 && num1>num3 )
     printf("Largest number is %d\n",num1);
    if(num2>num1 && num2>num3 )
     printf("Largest number is %d\n",num2);
    if(num3>num2 && num3>num1 )
    printf("Largest number is %d\n",num3);

    if (num1<num2 && num1<num3 )
     printf("Smallest number is %d\n",num1);
    if(num2<num1 && num2<num3 )
     printf("Smallest number is %d\n",num2);
    if(num3<num2 && num3<num1 )
     printf("Smallest number is %d\n",num3);
  return 0;
}