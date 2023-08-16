# include<stdio.h>

int main() {
    int  length_a;
    printf("enter length a = ");
    scanf("%d", &length_a);

    int width_b;
    printf("enter width b = ");
    scanf("%d", &width_b);


    //perimeter formula = 2(a+b)//


    printf("perimeter is : %d", 2 * (length_a + width_b));

    return 0;
}