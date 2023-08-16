#include<stdio.h>

/*Main Body*/

 int main()
 {
    int a,b,c;
    float avg;
    printf("\tEnter Three Number\n");
    printf("---------------------\n");

    printf("Enter Firts Number : ");
    scanf("%d", &a);

    printf("\nEnter Number Two : ");
    scanf("%d", &b);

    printf("\nEnter Number Three : ");
    scanf("%d", &c);

    printf("-----------------------\n");

    /* To Find Average*/

    avg=a+b+c/3.0;

    /* %f for Basic Result*/
    /*  %.2f  for Two number of Average */

    printf("\nAverage Of Three : %.2f", avg);

    return 0;
}