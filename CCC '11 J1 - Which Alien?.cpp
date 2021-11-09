#include <iostream>
    #include <cmath>

    int main()
    {
        int a,e;
        std::cin >> a >> e;
        if(a>=3 && e<=4) std::cout << "TroyMartian" << std::endl;
        if(a<=6 && e>=2) std::cout << "VladSaturnian" << std::endl;
        if(a<=2 && e<=3) std::cout << "GraemeMercurian" << std::endl;
        return 0;
    }
