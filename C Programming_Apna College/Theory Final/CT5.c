#include<stdio.h>

int main()
{
    int x=20, *y, *z;
    y=&x;
    z=y;
    printf("%d\n",*y);
    ++*y; //21
    //*y++; //memory location
    printf("%d\n",*y);
    ++*z; //x value increment
    *z++; //memory location
    x++;

    printf("%d %d %d", x,y,z);
    return 0;
}
