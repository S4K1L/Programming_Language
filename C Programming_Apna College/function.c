# include<stdio.h>

void bd();
void ind();

int main(){
    printf("Enter b for Bangladesh and i for India : ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'i'){
          ind();
    }else{
         bd();
    }

    return 0;
}

void bd(){
    printf("Assalahmualaykum");
}
void ind(){
    printf("Namaste");
}
