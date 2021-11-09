#include <iostream>
#include <cmath>
#include <string>
#include <vector>

void delMin(int arr[],int a,std::vector<bool> v,int x){
    if(x==a) return;
    int mini,minipoz;
    mini=10000000;
    for(int i=0;i<a;i++)
    if(v[i]==true){
        if(arr[i]<mini){
          mini=arr[i];
          minipoz=i;}
    }
    std::cout << mini << std::endl;
    v[minipoz]=false;
    x++;


    delMin(arr,a,v,x);
}

int main(){

    int br;
    std::cin>>br;
    int arr[br];
    for(int i=0;i<br;i++)
        std::cin >> arr[i];
    std::vector<bool> v(br,true);
    int x=0;
    delMin(arr,br,v,x);
    return 0;
}
