#include<stdio.h>

int main() {

    char ch;
    printf("Enter a Character : ");
    scanf("%s", &ch);

    if(ch>=97 && ch<=122){
        printf("Character Is Lowercase\n");
    }else{
        printf("Character is Not Lowercase\n");
    }

    return 0;
}