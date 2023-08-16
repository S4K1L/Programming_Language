#include<stdio.h>

int main() {
    int i;
    printf("Enter a Number : ");
    scanf("%d", &i);

    if(i>=1 && i<=10){
        printf("Number is Natural \n");

    }
    else{
        printf("Number is Not Natural \n");
    }
    return 0;
}