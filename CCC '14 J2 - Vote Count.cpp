#include <iostream>
#include <cmath>
#include <string>
    int main()
    {
        int s;
        std::cin >> s;

        std::string x;
        std::cin>>x;

        int a=0,b=0;
        for(int i=0;i<s;i++)
            if(x[i]=='A') a++;
            else b++;
        if(a>b) std::cout << "A";
        else if(a<b) std::cout << "B";
        if(a==b) std::cout << "Tie";
        return 0;
    }
