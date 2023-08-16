#include<stdio.h>

int main() {

    int a=23;
    printf("Enter Your Age : ");
    scanf("%d", &a);

    if(a>18){
        printf("You Can Drive\n");
    }
    else{
        printf("Sorry You cant Drive\n");
    }

    return 0;
}