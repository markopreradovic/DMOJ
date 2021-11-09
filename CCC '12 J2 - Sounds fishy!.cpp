#include <iostream>
#include <cmath>
#include <string>


int main(){
    int arr[4];
    for(int i=0;i<4;i++)
        std::cin >> arr[i];


    int br1=0;
    for(int i=0;i<4;i++)
        if(arr[i]>arr[i+1]) br1++;
    if(br1==3){
        std::cout << "Fish Diving";
        return 0;
    }

    int br2=0;
    for(int i=0;i<4;i++)
        if(arr[i]==arr[i+1]) br2++;
    if(br2==3) {
    std::cout << "Fish At Constant Depth";
    return 0;
    }

    int br3=0;
    for(int i=0;i<4;i++)
        if(arr[i]<arr[i+1]) br3++;
    if(br3>=3) {
    std::cout << "Fish Rising";
    return 0;
    }

    std::cout << "No Fish";
    return 0;
}
