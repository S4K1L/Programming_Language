#include<stdio.h>

int main() {
    int i=0;
    int n;
    int factorial=1;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        factorial *=i;
    }
    printf("The Factorial of %d is %d",n,factorial);



    return 0;
}