#include<stdio.h>

int main()
{
    int m;
    int n;
    int a=1;
    int b=2;
    int x;
    int y;
    int count=0;
    scanf("%d %d",&m,&n);

    if(m%a==0)
    {
        x=m*n;
    }else{x=m*n;}


    if(n%b==0)
    {
        y=a*b;
    }else{y=(a*b);}

    count=(x/y);

    printf("%d", count);

    return 0;
}
