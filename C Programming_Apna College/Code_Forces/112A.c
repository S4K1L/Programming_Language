#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100];
    int i;

        scanf("%s", s1);
        scanf("%s", s2);

    for(i=0; s1[i]!='\0'; i++)
    {
        if(s1[i]>=97)
        s1[i]=s1[i]-32;

    }
    for(i=0; s2[i]!='\0'; i++)
    {
        if(s2[i]>=97)
        s2[i]=s2[i]-32;

    }
    //strcmp= string compare
    // s1<s2= -1
    // s2<s1= 1
    // s1=s2=0
    int j=strcmp(s1,s2);

    printf("%d",j);
    return 0;
}
