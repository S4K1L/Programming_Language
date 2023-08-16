#include<stdio.h>

int main()
{
   long long int m,n,a,x,y,z;
    scanf("%lld %lld %lld",&m,&n,&a);

    if(m%a==0)
    {
        x=m/a;
    }else{x=(m/a)+1;}
    if(n%a==0)
    {
        y=n/a;
    }else{y=(n/a)+1;}

    z=x*y;

    printf("%lld", z);
    return 0;
}
