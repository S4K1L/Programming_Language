#include<stdio.h>

int main()
{
    char s[100];
    gets(s);
    int vowel=0,cons=0;

    int len=strlen(s);

    for(int i=0; i<len; i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            vowel++;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            if(s[i]!='a' || s[i]!='e' || s[i]!='i' || s[i]!='o' || s[i]!='u')
            {
            cons++;
            }
        }
    }

    printf("Vowel are : %d\n", vowel);
    printf("Consonante are : %d\n", cons);
    return 0;
}
