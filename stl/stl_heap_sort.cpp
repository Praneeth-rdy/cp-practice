#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void show_vector(vector<int> myvector){
    vector<int>::iterator itr = myvector.begin();

    while(itr != myvector.end()){
        cout << *itr << " ";
        itr++;
    }
    cout << "\n";
}

bool comp(int a, int b){
    return a > b;
}

int main(){
    vector<int> v = {5, 6, 1, 4, 3, 10, 12, 11};
    // builds max heap
    make_heap(v.begin(), v.end());
    // sorts max heap into a range of elements in ascending order
    sort_heap(v.begin(), v.end());

    // builds min heap
    make_heap(v.begin(), v.end(), comp);
    // sorts min heap into a range of elements in descending order
    sort_heap(v.begin(), v.end(), comp);

    show_vector(v);
    return 0;
}

/*
sort_heap converts the max_heap [first, last) into a sorted range in ascending order.
The resulting range no longer has the max heap property.
sort_heap(first, last, comp) => you can pass a comparison function to sort elements in descending order.

*/