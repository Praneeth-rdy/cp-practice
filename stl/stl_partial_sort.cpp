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
    // bringing first n (say 4) smallest elements in the array to starting position in *sorted order*
    partial_sort(v.begin(), v.begin()+4, v.end());
    show_vector(v);
    return 0;
}

/*
1) partial_sort(first, middle, end) rearranges the elements such that elements before the middle are the smallest in the entire range [first, last)
and also are sorted in ascending order by default.
2) The order of remaining elements [middle, last) is unspecified
* 3) a comparison function can be passed in case of descending order. In this case the elements before the middle [first, middle) are the largest in the range [first, last)
* partial_sort(first, middle, last, comp)

* can be used to get first n smallest or largest elements

Properties:
1) Not stable algo

*/