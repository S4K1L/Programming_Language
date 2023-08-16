#include<stdio.h>

int main() {
    int physics, math, biology;
    float total;
    printf("Enter Your Physics Marks : ");
    scanf("%d", &physics);

    printf("Enter Your Math Marks : ");
    scanf("%d", &math);

    printf("Enter Your Biology Marks : ");
    scanf("%d", &biology);

    total = (physics + math + biology)/3;

    if((total<40) || physics<33 || math<33 || biology<33){
        printf("Your Total Percentage is %f and You are Fail\n", total);
    }
    else{
        printf("Your Total Percentage is %f  And You are Pass\n", total);
    }



    return 0;
}