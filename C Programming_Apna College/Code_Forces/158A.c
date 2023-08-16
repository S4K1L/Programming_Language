#include<stdio.h>

int main()
{
    int x,k,i, count=0;
    scanf("%d %d", &x, &k);
    int n[x];
    for(i=0; i<x; i++){

        scanf("%d",&n[i]);
    }

    k=k-1;

    for(i=0; i<x; i++){

        if(n[i]>=n[k] && n[i]>0)

        count++;
        }

    printf("%d\n", count);
    return 0;
}
