#include <iostream>
#include <cmath>
#include <string>

int main(){
    char arr[6];
    for(int i=0;i<6;i++) std::cin >> arr[i];
    int br=0;
    for(int i=0;i<6;i++) if(arr[i]=='W') br++;
    if(br==5 || br==6) std::cout << "1";
    else if(br==3 || br==4) std::cout << "2";
    else if(br==1 || br==2) std::cout << "3";
    else std::cout << "-1";
     
    return 0;
}
