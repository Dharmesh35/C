// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n,i=0,r,c,q,sum;
//     printf("Enter the number:\n");
//     scanf("%d",&n);
//     q=n;
//     // to find the number of digits or you can say  order of digits
//     while(n!=0)
//     {
//       n=n/10;
//       i++;
//     }
//      while(q!=0)
//     {
//         r=q%10;
//         c=pow(r,i);
//         sum=sum+c;
//         q=q/10;
//     }
//     if(sum==q)
//     printf("Number is armstrong");
//     else
//     printf("Not armstrong");
//     return 0;    
// }