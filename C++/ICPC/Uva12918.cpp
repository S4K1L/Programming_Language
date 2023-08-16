#include<stdio.h>
int main()
{   int T;
    scanf("%d",&T);
    while(T--)
    {
        int n,m,wk=0;
        scanf("%d %d",&n,&m);
        wk=(m-n)*n;
        wk+=((n-1)*n)/2;
        printf("%d\n",wk);
    }
    return 0;
}
