#include <iostream>

int main()
{
    int x,y,z;
    std::cin >> x >> y >> z;
    if(x==60 && y==60 && z==60) std::cout << "Equilateral";
    else if(x+y+z==180 && (x==y || y==z || x==z)) std::cout << "Isosceles";
    else if(x+y+z==180 && (x!=y || y!=z || x!=z)) std::cout << "Scalene";
    else if(x+y+z>180 || x+y+z<180) std::cout << "Error";
    return 0;
}
