#include<stdio.h>

union Data
{
    int x;
    char y;
};

int main()
{
    union Data p,b;
    p.y= 60;
    b.x= 12;

    printf("%d", p.y);
    return 0;
}
