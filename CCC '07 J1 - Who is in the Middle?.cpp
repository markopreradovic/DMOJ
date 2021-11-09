#include <iostream>
#include <cmath>

int main()
{
    int x,y,z;
    std::cin >> x >> y >> z;
    int minn=0,maxx=0;
    if(x>=y && x>=z) maxx=x;
    else if(y>=x && y>=z) maxx=y;
    else if(z>=x && z>=y) maxx=z;

    if(x<=y && x<=z) minn=x;
    else if(y<=x && y<=z) minn=y;
    else if(z<=x && z<=y) minn=z;

    if((minn==x && maxx==z) || (minn==z && maxx==x)) std::cout << y;
    else if((minn==x && maxx==y) || (minn==y && maxx==x)) std::cout << z;
    else if((minn==y && maxx==z) || (minn==z && maxx==y)) std::cout << x;
    return 0;
}
