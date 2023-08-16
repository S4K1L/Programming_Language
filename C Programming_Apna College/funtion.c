#include<stdio.h>

void bd();
void ind();

int main(){
    printf("Enter Your Religion :");
    int ch;
    scanf("%c", &ch);
    if(ch == 'i'){
        bd();
    }else{
        ind();
    }

    return 0;
}

void bd(){
    printf("Assalahmualaykum");
}

void ind(){
    printf("Namaste");
}