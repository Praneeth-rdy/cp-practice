#include <iostream>

using namespace std;

template <typename T>
T add(T a, T b){
    return (a+b);
}

int main(){
    cout << add<int>(1, 2) << endl;
    return 1;
}