//insurance company//
#include<stdio.h>
int main()
{
    int age;
    char hlt,sx,lct;
    printf("Enter your Age :\nEnter your sex ( m / f ):\nEnter your Health Status ( g / b ):\nEnter your Location ( c / r ):\n");
    scanf("%d %c %c %c ",&age, &sx, &hlt, &lct);
    
    if((age>=25&&age<=35)&&(sx=='m')&&(lct=='c')&&(hlt=='g'))
     {
     printf("Your Premium is 4 per Thousand and your can't exceed more than 2 lakhs ");
     }
    else if ((age>=25&&age<=35)&&(hlt=='g')&&(lct=='c')&&(sx=='f'))
     {
     printf("Your Premium is 3 per Thousand and your can't exceed more than 1 lakhs ");
     }
    else if ((age>=25&&age<=35)&&(sx=='m')&&(hlt=='b')&&(lct=='r'))
     {
     printf("Your Premium is 6 per Thousand and your can't exceed more than 10,000 ");
     }
    else 
     {
      printf("This person is not insured.");
     }
  return 0;
}