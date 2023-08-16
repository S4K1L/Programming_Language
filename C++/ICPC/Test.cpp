#include<stdio.h>
#include<unistd.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int j=0; j<T; j++)
    {
        int n,m,tries,val,total=0;
        scanf("%d %d", &n,&m);
        val=m;
        for(int i=1; i<=n; i++)
        {
            tries=val-1;
            val--;
            total+=tries;
        }
        printf("%d\n",total);
    }
    return 0;
}
