#include<stdio.h>

int main() {

    int n,r,sum=0,temp;

    printf("Enter Number : ");
    scanf("%d", &n);
    temp = n ;
   if (n>0){
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
}
if(temp==sum){
    printf("Armstrong Number \n");
}
else{
    printf("Not Armstrong Number \n");
}
    return 0;
}