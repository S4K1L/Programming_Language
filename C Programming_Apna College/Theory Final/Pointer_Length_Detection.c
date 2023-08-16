#include<stdio.h>

int main()
{
    int c=0;
    char s[100];
    gets(s);

    for(int i=0; s[i]!='\0'; i++)
    {
        c++;
    }
    printf("%d",c);
    return 0;
}
