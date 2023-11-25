//vowelconsonant//
#include<stdio.h>
int main()
{
    char lt,vo;
    printf("Enter the Letter :");
    scanf("%c",&lt);
    vo=(lt=='a'||lt=='e'||lt=='i'||lt=='o'||lt=='u');
    if(vo)
     printf("%c is a vowel",lt);
    else
     printf("%c is a consonant",lt);
    return 0;
}
 