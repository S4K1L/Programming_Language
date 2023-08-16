#include<stdio.h>

int main() {

    int marks;
    printf("Enter Marks (1-100) : \n");
    scanf("%d", &marks);


    if (marks < 30){
        printf("FAIL \n");
    }
    else if (marks >= 30 && marks < 70 ){
        printf("Your Grade is B \n ");
    } 
    else if(marks>=70 && marks < 90){
        printf("Your Grade is A \n");
    }
    else if(marks>=90 && marks<=100){
        printf("Your Grade is A+ \n");
    }
    else if(marks > 100){
        printf("Wrong Number \n");
    }

    return 0;
}