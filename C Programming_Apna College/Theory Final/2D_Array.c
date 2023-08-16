#include<stdio.h>

int main()
{
    int arr[3][3];

    for(int col=0; col<3; col++)
    {
        for(int raw=0; raw<3; raw++)
        {
            scanf("%d", &arr[col][raw]);
        }
    }

    printf("Output is : \n");
    for(int col=0; col<3; col++)
    {
        for(int raw=0; raw<3; raw++)
        {
            printf("%d ", arr[col][raw]);
        }
        printf("\n");
    }
    return 0;
}
