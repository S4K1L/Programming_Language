#include<stdio.h>

int main(){

    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int sum =0;
    for(int i=1;i<=n; i++){
        sum=sum+i;
    }
    printf("sum is %d", sum);


    return 0;
}