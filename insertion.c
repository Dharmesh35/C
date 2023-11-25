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

    for(i=1;i<n;i++)             // this is for the number of passes performed for sorting
    {   
        temp=array[i];             // first we stored array[i] in temp in case we need it in future
        for(j=i-1;j>=0;j--)         // here we started loop just from previous index from i
        {
            if(array[j]>temp)          // to compare the two digits if condition follow we swap the number
            {
                array[j+1]=array[j];
            }
            else
            break;
        } 
        array[j+1]=temp;        
    }
    printf("Sorted:");
    for(i=0;i<n;i++) 
    printf("%d  ",array[i]);
      
    return 0;
}