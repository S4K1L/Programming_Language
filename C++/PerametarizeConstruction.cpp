#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x,y;
    friend void distance(point, point);
public:
    point(int a,int b)
    {
        x=a;
        y=b;
    }

    void display()
    {
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }

};
void distance(point s1, point s2)
{
    int x_diff=(s2.x-s1.x);
    int y_diff=(s2.y-s1.y);
    int diff=sqrt(pow(x_diff,2)+pow(y_diff,2));
    cout<<"The Different is ("<<diff<<")"<<endl;
}
int main()
{
   point c1(4,6);
   c1.display();
   point c2(8,4);
   c2.display();

   distance(c1,c2);


    return 0;
}
