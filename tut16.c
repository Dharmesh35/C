#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>

void pagebreak(FILE *fp);

int main()
{
    FILE *fp;
    fp = fopen("d.txt", "r");
    if (fp == NULL)
    {
        puts("Can't open the file.");
        exit(1);
    }
    pagebreak(fp);
    fclose(fp);
    _getch();
    return 0;
}

void pagebreak(FILE *fp)
{
    int dot = 0;
    char ch;
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c", ch);
       
        if (ch == '.')
        {
            if (dot == 50)
            {
                printf("Press any key. . .");
                _getch();
                system("cls");
                dot = 1;
            }
            else
                dot++;
        }

    }
}
