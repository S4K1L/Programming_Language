#include<stdio.h>

int main() {

    int days;
    printf("Enter a Day : ");
    scanf("%d", &days);

    switch (days) {
         case 1: printf("Sater Day \n");
              break;
         case 2: printf("Sun Day \n");
              break;
         case 3: printf("Mon Day \n");
              break;       
         case 4: printf("Tues Day \n");
              break;
         case 5: printf("Wednes Day \n");
              break;
         case 6: printf("Thues Day \n");
              break;  
         case 7: printf("Fri Day \n");
              break;             
    default : printf("The Day Not Valid \n");
    
    }


    return 0;
}