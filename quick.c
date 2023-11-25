
#include<stdio.h>

void quicksort(int array[50], int start , int end)
{
    int i,j,temp,pivot;
    if(start<end)
    {
        pivot=start,i=start,j=end;  

        while(i<j)
        {
            while(array[i]<=array[pivot] && i<end)
            i++;
            while(array[j]<array[pivot])
            j--;
            if(i<j)
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }

        temp=array[pivot];
        array[pivot]=array[j];
        array[j]=temp;

        quicksort(array,0,j-1);
        quicksort(array,j+1,end);
    }
}

int main()
{
    int array[50],i,n;
    printf("Number of values:");
    scanf("%d",&n);      //for knowing how many values  next loop should take

    printf("Enter the Number:");
    for(i=0;i<n;i++)   // this loop is to fill the input number in the array
    {     
      scanf("%d",&array[i]);
    }

    quicksort(array,0,n-1);
      
    printf("Sorted:");
    for(i=0;i<n;i++) 
    printf("%d  ",array[i]);
      
    return 0;
}

