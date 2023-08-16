#include<stdio.h>

int main()
{
    /*int c=0;
    char s[100];
    char s1[100];
    gets(s);
    gets(s1);

    printf("%s%s", s,s1);*/

    char s[100],s2[100],s3[200];
    gets(s);
    gets(s2);

    int c=0,c1=0;




    for(int i=0; s[i]!='\0'; i++)
    {
        s3[i]=s[i];
        c++;
    }

    for(int i=0; s2[i]!='\0'; i++)
    {
        c1++;
    }

    int len=c+c1;

    for(int i=0; i<c1; i++)
    {
        c++;
        s3[c]=s2[i]
    }




    return 0;
}
