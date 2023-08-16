#incude<bits/stdc++.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int j=0; j<T; j++)
    {
        int n,m,trys,house,total=0;
        scanf("%d %d", &n,&m);
        house=m;
        for(int i=1; i<=n; i++)
        {
            trys=house-1;
            house--;
            total+=trys;
        }
        printf("%d\n",total);
    }
    return 0;
}
