#include <iostream>
#include <iostream>
#include <string>

int check(int x,int s){
    x=x+s;
    if(x==99) x=77;
    else if(x==90) x=48;
    else if(x==54) x=19;
    else if(x==9)  x=34;
    else if(x==40) x=64;
    else if(x==67) x=86;
    return x;
}

int main(){
    int poz=1;
    int kocka;
    std::cin >> kocka;
    while(poz<=100){
        if(kocka == 0) {
            std::cout << "You Quit!";
            return 0;
        }
        int ax=check(poz,kocka);
        if(ax<=100) poz=ax;

        std::cout << "You are now on square " << poz << std::endl;
        if (poz==100) {
            std::cout << "You Win!";
            return 0;
        }
        std::cin >> kocka;
    }

    return 0;
}
