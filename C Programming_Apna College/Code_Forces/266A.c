#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,count=0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", &s);

    for(i=0,j=1; i<n; i++)
    {
        if(s[i]==s[j])
        {
            count++;
            j++;
        }
        else
        {
            j++;
        }
    }
    printf("%d",count);

    return 0;
}
