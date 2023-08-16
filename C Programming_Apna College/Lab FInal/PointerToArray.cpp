#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    printf("Enter Size of Array : ");
    scanf("%d", &N);
    int arr[N];
    int *ptr=arr;

    printf("Enter Array Number : ");
    for(int i=0; i<N; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("\nThe Array is : ");
    for(int i=0; i<N; i++)
    {
        printf("%d ",ptr[i]);
    }

    return 0;
}
