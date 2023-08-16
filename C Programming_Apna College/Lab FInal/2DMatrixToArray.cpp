#include<bits/stdc++.h>
using namespace std;
void input(int matrix[][col],int RAW, int COL)
{
    int i,j;

    for(i=0; i<COL; i++)
    {
        for(j=0; j<RAW; j++)
        {
            scanf("%d", ptr[i][j]);
        }
    }
}

int main()
{
    int raw,col;
    printf("Enter Size of Array : ");
    scanf("%d %d", &raw,&col);

    int arr[raw][col];

    return 0;
}
