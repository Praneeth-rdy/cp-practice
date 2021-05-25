#include <iostream>

using namespace std;

int main(){
    int r, a = 6, b = 3;
    if(a==0)
        return b;
    if(b==0)
        return a;
    while(b!=0){
        r = a%b;
        a = b;
        b = r;
    }
    return a;
    return 0;
}