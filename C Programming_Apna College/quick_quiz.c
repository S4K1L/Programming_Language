#include<stdio.h>

int main() {

    int a=0;
    printf("Enter a Number : ");
    scanf("%d", &a);

    while(a<=20){
        if(a>=10){
            printf("The Natural Number is %d\n", a);
        }
        a++;
    }

    return 0;
}