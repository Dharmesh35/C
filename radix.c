#include <stdio.h>  
  
int getMax(int a[], int n) {  
   int max = a[0];  
   for(int i = 1; i<n; i++) {  
      if(a[i] > max)  
         max = a[i];  
   }  
   return max; //maximum element from the array  
}  
  
void countingSort(int a[], int n, int place)  
{  
  int output[n + 1];  
  int count[10] = {0};    
  
  // Calculate count of elements  
  for (int i = 0; i < n; i++)  
    count[(a[i] / place) % 10]++;  
      
  // Calculate cumulative frequency  
  for (int i = 1; i < 10; i++)  
    count[i] += count[i - 1];  
  
  // Place the elements in sorted order  
  for (int i = n - 1; i >= 0; i--) {  
    output[count[(a[i] / place) % 10] - 1] = a[i];  
    count[(a[i] / place) % 10]--;  
  }  
  
  for (int i = 0; i < n; i++)  
    a[i] = output[i];  
}  


void radixsort(int a[], int n)
{     
    int place,output;
  // get maximum element from array  
    int max = a[0];  
    for(int i = 1; i<n; i++)  
    if(a[i] > max)  
    max = a[i];  
  
  // Apply counting sort to sort elements based on place value  
  for (int place = 1; max / place > 0; place *= 10)  ;
     int output[n + 1];  
  int count[10] = {0};    
  
  // Calculate count of elements  
  for (int i = 0; i < n; i++)  
    count[(a[i] / place) % 10]++;  
      
  // Calculate cumulative frequency  
  for (int i = 1; i < 10; i++)  
    count[i] += count[i - 1];  
  
  // Place the elements in sorted order  
  for (int i = n - 1; i >= 0; i--) {  
    output[count[(a[i] / place) % 10] - 1] = a[i];  
    count[(a[i] / place) % 10]--;  
  }  
  
  for (int i = 0; i < n; i++)  
    a[i] = output[i];  
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

    radixsort(array, n); 

    printf("Sorted:\n");  
    for(i=0;i<n;i++) 
    printf("%d  ",array[i]);
      
    return 0; 
}  