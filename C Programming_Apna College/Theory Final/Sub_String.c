#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    char sub[100];
    int counts=0;
    printf("Enter main String : ");
    gets(s);
    printf("Enter sub string : ");
    gets(sub);

    int len=strlen(s);
    int len2=strlen(sub);

    if(len>len2)
    {

    for(int i=0; i<len2; i++)
    {
        for(int j=0; j<len; j++)
        {
            if(sub[i]==s[j])
            {
                counts++;
            }
        }
    }

            if(counts>=len2)
            {
                printf("\nSubstring found\n");
            }else{
                printf("\nNot Found\n");
            }

    }else
    {
        printf("\nSub String is bigger then Main String\n");
    }

    return 0;
}
