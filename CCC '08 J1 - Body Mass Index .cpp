#include <iostream>
    #include <cmath>

    int main()
    {
        double w,h;
        std::cin >> w >> h;
        double b=w/(h*h);
        if(b<18.5) std::cout << "Underweight";
        else if(b>18.5 && b<25) std::cout << "Normal weight";
        else std::cout << "Overweight";
        return 0;
    }
