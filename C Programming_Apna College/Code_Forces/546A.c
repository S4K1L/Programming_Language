#include<stdio.h>

int main()
{
    int k,n,w,price=0,price2,borrow=0;

    scanf("%d %d %d", &k,&n,&w);

    for(int i=1; i<=w; i++)
    {
        price=k*i;
        price2=price2+price;
    }
    if(n<price2)
    {
        borrow=price2-n;
    }
    printf("%d",borrow);
    return 0;
}
