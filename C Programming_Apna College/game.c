#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    int guess;
    int nguess=1;
    srand(time(0));
    number= rand()%100+1;

    /*printf("The Number is %d\n",number);*/

do{
    printf("Guess The Number Bitween 1-100 : ");
    scanf("%d",&guess);


if(guess>number){
        printf("Guess Lower Number please\n");
    }else if(guess<number){
        printf("Guess Higher Number Please\n");
    }else{
        printf("Your Number of Attempt is %d\n",nguess);
    
    }
    nguess++;
}

while(guess!=number);

 
 return 0;
}