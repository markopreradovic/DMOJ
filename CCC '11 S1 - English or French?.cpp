#include <iostream>
#include <string>
using namespace std;
int main(){
    int a;
    cin >> a;

    std::string s[10000];

    for(int i=0;i<=a;i++)
       std::getline(cin,s[i],'\n');
    
    int brt=0,brs=0;
    for(int i=0;i<=a;i++){
        for(unsigned j=0;j<s[i].size();j++){
             if( (s[i][j]=='T') || (s[i][j]=='t') ) brt++;
             else if( (s[i][j]=='S') || (s[i][j]=='s') ) brs++;
        }
    }
    if(brs<brt) std::cout << "English";
    else if (brs>brt) std::cout << "French";
    else if (brs==brt) std::cout << "French";
    return 0;
}
