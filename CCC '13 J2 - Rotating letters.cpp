#include <iostream>
#include <cmath>
#include <string>

bool foo(std::string x){
    for(int i=0;i<x.size();i++)
        if(x[i]!='I' && x[i]!='O' && x[i]!='S' && x[i]!='H' && x[i]!='Z' && x[i]!='X' && x[i]!='N') return false;
    return true;
}

int main(){
    std::string x;
    std::cin>>x;
    if(foo(x)) std::cout << "YES";
    else std::cout << "NO";
    return 0;
}
