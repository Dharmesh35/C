// #include<stdio.h>
// int main()
// {
//     int array[50],i,n,j,temp,k;
//     printf("Number of values:");
//     scanf("%d",&n);      //for knowing how many values  next loop should take

//     printf("Enter the Number:");
//     for(i=0;i<n;i++)   // this loop is to fill the input number in the array
//     {     
//       scanf("%d",&array[i]);    
//     }

//     printf("Enter the K:");     //here k is to find the Kth smallest element in the given array. 
//     scanf("%d",&k);


//     for(i=0;i<n-1;i++)        // here we started bubble sort.  //this for loop is to create number of passes for sorting
//     {
//       for(j=0;j<n-i-1;j++)     
//       {
//         if(array[j]>array[j+1])       // here we compare the number if the condition follow we will swap the number andmove for the next comparison
//         {
//           temp=array[j];
//           array[j]=array[j+1];
//           array[j+1]=temp;
//         }
//       }
//     }

//     printf("the %dth smallest element in the given array is %d",k,array[k-1]);      //here the array index start from 0 so for kth element ,we should print k-1,s index value
//     return 0;
// }

#include <stdio.h>
int main ()
{
    int a;
    char s;
    printf("Enter the number of subjects you have passed \n");
    scanf("%d", & a);
    switch (a)
    {
    case 0:
        printf("There are no gifts for you \n");
        break;
    case 2:
    printf("You will be rewarded with 50 rupees\n");
        break;
    case 1:
        printf("Enter the subject you have passed \t M/P \n");
        scanf("%s",&s);
        switch (s)
        {
        case 'm':
            printf("You will rewarded with 20 rupees \n");
            break;
        case 'p' :
            printf("You will be rewarded with 40 rupees \n");
            break;  
        default:
            break;        
        }
    }
    return 0;
}