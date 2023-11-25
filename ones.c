#include<stdio.h>
int main()
{
    int array[50],n,i,zeros=0,ones=0,twos=0; // here n is number of inputs ,i is counter, zeros,twos,ones are the counter for 0's,1's,2's
    printf("Number of values:");
    scanf("%d",&n);                         // for knowing the limit of next loop

    printf("Enter the Number(only 0,1,2):\n");          
    for(i=0;i<n;i++)                        // for storing the input in the array by using loop because we can't store values direct 
    { 
    scanf("%d", &array[i]);
    }
    
    for(i=0;i<n;i++)                         // now this loop will move from 0 to end of array ( i.e n ) ,
    {
        if(array[i]==0)               // by this if else we compare all digits of array to 0 ,if it match zero counter value will increase by one
        { 
          zeros++;
        }
       

        else if(array[i]==1)         // here we compare all digits of array to 1 ,if it match ones counter value will increase by one
        {
          ones++;
        }

        else                        //if it is neither 0 and 1 then it will be confirmly 2, so twos counter increase its value by one
        {
          twos++;
        }
    }

    // as we can't use sorting method to sort input we just created 3 loop which will arrange all 0's ,1's, 2's  

    for(i=0;i<zeros;i++)        //loop start from zero to number of zeros in array       // in 1st loop all zeros will be printed 
    printf("0\t");

    
    for(i=0;i<ones;i++)         //loop start from zero to number of ones in array         // in 2st loop all ones will be printed  
    printf("1\t");

    
    for(i=0;i<twos;i++)  //loop start from zero to number of twos in array               // in 3st loop all twos will be printed 
    printf("2\t"); 

    return 0;


}