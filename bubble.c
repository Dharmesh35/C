#include<stdio.h>
int main()
{
    int array[50],i,n,j,temp;
    printf("Number of values:");
    scanf("%d",&n);      //for knowing how many values  next loop should take

    printf("Enter the Number:");
    for(i=0;i<n;i++)   // this loop is to fill the input number in the array
    {     
      scanf("%d",&array[i]);
    }

    for(i=0;i<n-1;i++)          // here we started bubble sort.  //this for loop is to create number of passes for sorting
    {
      for(j=0;j<n-i-1;j++)
      {
        if(array[j]>array[j+1])      // here we compare the number if the condition follow we will swap the number andmove for the next comparison  
        {
        temp=array[j];
        array[j]=array[j+1];        //not using swap function ,we swaped basically
        array[j+1]=temp;
        }
      }
    }
    for(i=0;i< n;i++) 
    printf("%d\t",array[i]);      // this loop is to print the array one by one
      
 return 0;
}