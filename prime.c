// #include<stdio.h>  
// int main()
// {    
//   int n,i,count=0;   
//   printf("Enter the number to check prime:");    
//   scanf("%d",&n);        
    
//   for(i=1;i<=n;i++)
//   {
//    if(n%i==0)
//     count++;
//   }
//   if(count==2)
//   printf("number is prime");
//   else
//   printf("not prime");
// }    

#include <stdio.h>
int main ()
{
    int n=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for (int i=2 ; i<n; i++){
      int flag=0;
      for (int a=2 ; a<i ; a++){
        if(i%a==0){
          flag=1;
        }
      }
      if(flag==0){
       printf("%d  ",i);
      }
    }
  return 0;
}
