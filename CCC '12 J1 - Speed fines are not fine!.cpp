#include <iostream>
    #include <cmath>

    int main()
    {
        int a,b;
        std::cin >> a >> b;
        if(a>=b) std::cout << "Congratulations, you are within the speed limit!";
        else {
            int c=b-a,f=0;
            if(c>=1 && c<=20) f=100;
            else if(c>=21 && c<=30) f=270;
            else if(c>=31) f=500;
            std::cout << "You are speeding and your fine is $" << f << ".";
        }
        return 0;
    
