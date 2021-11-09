#include <iostream>
    #include <cmath>

    int main()
    {
        int n;
        std::cin>>n;
        char a[n],b[n];
        int br=0;
        for(int i=0;i<n;i++) std::cin >> a[i];
        for(int i=0;i<n;i++) std::cin >> b[i];
        for(int i=0;i<n;i++) 
            if(a[i]==b[i]) br++;
        std::cout << br;
        return 0;
    }
