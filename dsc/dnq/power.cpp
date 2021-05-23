#include <iostream>

using namespace std;

int power(int x, int n){
    int temp;
    if (n==0)
        return 1;
    temp = power(x, n/2);
    if (n%2==0)
        return temp * temp;
    else
        return x * temp * temp;
}

int main(){
    int x, n;
    cin >> x >> n;
    cout << power(x, n) << endl;
    return 1;
}

// T(n) = T(n/2) + O(1)
// => T(n) = O(logn)