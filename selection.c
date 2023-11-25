#include<stdio.h>
int main()
{
    int array[50],i,n,j,temp,arraymin;
    printf("Number of values:");
    scanf("%d",&n);      //for knowing how many values  next loop should take

    printf("Enter the Number:");
    for(i=0;i<n;i++)   // this loop is to fill the input number in the array
    {     
      scanf("%d",&array[i]);
    }

    for(i=0;i<n-1;i++)        //this loop is for the number of passes
    {
       arraymin=i;              //here we assumed the minimum number index =i
       for(j=i+1;j<n;j++)           // started loop from one index after i
       {
        if(array[j]<array[arraymin])        // here we compared the array for the minimum values
           arraymin=j;                  // if any other  minimum value found then we replace it 

       if(arraymin!=i)
       {
           temp=array[arraymin];            //this is to swap the array[i] with the array of index arraymin
           array[arraymin]=array[i];
           array[i]=temp;
       }

       }
    }  
    for(i=0;i< n;i++) 
    printf("%d\t",array[i]);           // this to print the array one by one indexing
      
    return 0;
}