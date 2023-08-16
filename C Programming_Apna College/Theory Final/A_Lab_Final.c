#include<stdio.h>

int maximum(int arr[],int size)
{
    int max=arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int minimum(int arr[],int size)
{
    int min=arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}


int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];

    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max=maximum(arr,size);
    int min=minimum(arr,size);

    printf("Maximum is : %d\n", max);
    printf("Minimum is : %d", min);

    return 0;
}
