#include<bits/stdc++.h>
using namespace std;

int *prime(const int n,int *number)
{
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            *(number+i)=i;
        }
    }
    return number;
}

int main()
{
    int n;
    printf("Enter Size of Array : ");
    scanf("%d", &n);

    int number[n];

    prime(n,number);

    printf("The prime Number is : ");

    for(int i=2; i<n; i=i+2)
    {
        printf("%d ", *(number+i) );
    }


    return 0;
}
