#include<stdio.h>

int main() 
{

    int gr;

    printf("Enter your Mark : \n");
    scanf("%d", &gr );

    if (gr >= 90 && gr <=100)
    {
        printf("Congrates- Your Grade is A++ \n");
    }
    else if (gr >= 70 && gr <90)
    {
        printf("Congrates- Your Grade is A+ \n");
    }
    else
    {
        printf("Batter Luck Next Time");
    }
    
    
    return 0;
}