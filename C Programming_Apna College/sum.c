#include<stdio.h>

int main() {
    int i=1;
    int sum = 0;
    int n;

    printf("Enter a Number for Sum : ");
    scanf("%d",&n);

    /*for(i=0; i<=n; i++){
        sum+=i;
    }*/
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("The Sum Is %d", sum);
     

    return 0;
}