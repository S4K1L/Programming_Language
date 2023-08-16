#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[200];
    int n,i,j;

    scanf("%s",&a);

    n=strlen(a);

    for(i=0,j=0; i<n; i++)
    {
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'
           &&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U'
           &&a[i]!='Y'&&a[i]!='y')
        {
            b[j]='.';
            j++;
            if(a[i]>=65 && a[i]<=97)
            {
                b[j]=a[i]+32;
                j++;
            }
            else
            {
                b[j]=a[i];
                j++;
            }
        }

    }
    b[j]='\0';
    printf("%s",b);


    return 0;
}
