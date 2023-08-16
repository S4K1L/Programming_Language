#include<stdio.h>


int main() {

    int age;
    printf("Enter Your Age : \n");
    scanf("%d", &age );

    if (age > 18)
    {
        printf("Congragulations \n");
        printf("You can Vote Here \n");
    }
    else
    {
        printf("Sorry, You can't Vote Here \n ");
    }

    printf("Thank You For Visite Ower Site");



    return 0;
}

