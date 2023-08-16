#include<stdio.h>

int main() {

    int i=0;
    printf("Enter a Number : ");
    scanf("%d", &i);

    while(i<10){
        printf("The Value Of i is %d\n", i);
        i++;
    }

    return 0;
}