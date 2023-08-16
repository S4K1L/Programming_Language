#include<bits/stdc++.h>

int findSwaps( int n, int a[]);

int main()
{
    int T;
    scanf("%d",&T);
    int n[T];

    for(int i=0; i<T; i++)
    {
        scanf("%d",&n[i]);
    }

    for(int i=0; i<T; i++)
    {
        int len=strlen(n[i]);
        int a[len];
        for(int j=0; j<len; j++)
        {
            a[i]=j+1;
        }
        int count=findSwaps(&len, &a[])
        char result[len]=count/len;

        printd("Case %d : %d",i+1,result);
    }


    return 0;
}

int findSwaps( int n, int a[])
    {
        int count = 0, i, j, temp, b[100000];
        for( i = 0; i < n; i++ )
            {
                b[i] = a[i];
            }
    for( i = 0; i < n; i++ )
    {
        for( j = 0; j < n - 1; j++ )
            {
                if( b[j] > b[j+1] )
                {
                    temp = b[j];
                    b[j] = b[j+1];
                    b[j+1] = temp;
                    count++;
                }
            }
    }
return count;
    }


