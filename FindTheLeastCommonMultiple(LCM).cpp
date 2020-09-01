#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int a = 9, b = 6, lcm;
    int maxV = a*b;
    for(int i = std::max(a, b); i <= maxV; i++){
        if(i % a == 0 && i % b == 0){
            lcm = i;
            break;
        }
    }
    cout << lcm;
    return 0;
}

