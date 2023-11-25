//identify alphabet number and special character// 
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the Character:");
    scanf("%c",&c);
    if((c>='A'&& c<='z')||( c>='a'&&c<='b'))
     printf("%c is a Alphabet\n",c);
    else if( c>='0' && c<='9' )
     printf("%c is a Number\n",c);
    else
    printf("%c is a special character\n",c);
    return 0; 
} 