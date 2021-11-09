#include <iostream>
    #include <cmath>


    int main()
    {
        int d,m;
        std::cin>>m>>d;
        if(m==2 && d==18) std::cout << "Special";
        else if((m==2 && d<18) || (m<2)) std::cout << "Before";
        else if((m==2 && d>18) || (m>2)) std::cout << "After";
        return 0;
    }
