#include <iostream>
    #include <cmath>

    int main()
    {
        int a;
        std::cin >> a;
        int i=1;
        int cube=1;
        while(1){
            if(i*i<=a) cube=i;
            else{
                std::cout << "The largest square has side length " << cube << ".";
                break;
            }
            i++;
        }
        return 0;
    }
