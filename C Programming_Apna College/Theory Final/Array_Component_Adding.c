#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter Size of Array : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter number : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }

    printf("%d", sum);

    return 0;
}