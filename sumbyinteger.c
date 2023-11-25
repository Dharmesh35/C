#include <stdio.h> 
int main()
{
    int i, length;
  	char string[50];
  	printf("Enter String:");
  	gets(string);//  for storing string

    for(i=0;string[i]!=0;i++)// this loop is to measure the length the string
    {
       length++;
    }
  	
 	  printf("Reverse:");// we printed "Reverse" outside the loop because if we take it inside "reverse" also print with character   
  	for (i=length-1;i>=0;i--)// this loop means we intialised i  from back then comes to 0 to print all the  digit in reverse order
  	{
  		printf("%c", string[i]);// number wise each character will print as the i decreases from back
  	}
	return 0;
}
  