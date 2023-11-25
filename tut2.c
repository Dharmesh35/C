//overpayed salary//
#include<stdio.h>
int main()
{
     int hrs , i=1;
     int otpay;
     while (i<=10)
     {
         printf ("enter the number of hours worked:\n");
         scanf("%d",&hrs);
         if (hrs>=40)
            otpay=(hrs-40)*120;
        else
             otpay=0;
        printf ("overtime pay:Rs%d\n",otpay);
        i++;
     }
     return 0;
} 