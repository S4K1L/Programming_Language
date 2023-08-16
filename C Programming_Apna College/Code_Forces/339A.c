#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i,j,len,temp;
    scanf("%s", &s);

    len=strlen(s);

    for(i=0; i<len; i++)
    {
        for(j=0; j<len-i-1; j++)
        {
            if(s[j]!='+')
            {
                if(s[j]>s[j+2])
                {
                    temp=s[j];
                    s[j]=s[j+2];
                    s[j+2]=temp;
                }
            }
        }
    }
    printf("%s", s);
    return 0;
}
