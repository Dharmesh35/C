
void main()
{
    char string[20]={"hsemrahD"};

    char *str=string,*first=str,*last=str;
    int n;
    n=strlen(str);

    for(int i=0;i<n-1;i++)
    {
        last++;
    }
    for(int i=0;i<n/2;i++)
    {
        int temp =*last;
        *last=*first;
        *first=temp;

        first++;
        last--;
    }
    printf("%s",string);

}

