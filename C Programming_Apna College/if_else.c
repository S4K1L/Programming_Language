#include<stdio.h>

int main() {
     int age;
     printf("Enter Your Age : ");
     scanf("%d", &age);

     if(age<=70 && age>=18){
        printf("You Can Drive\n");
     }else{
        printf("You Cannot Drive\n");
     }
    return 0;
}