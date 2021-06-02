#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct item {
    int value;
    int id;
    string name;
};

void show_vector(vector<item> arr){
    vector<item>::iterator itr = arr.begin();

    while(itr != arr.end()){
        cout << (*itr).id << ": " << (*itr).name << " (value: " << (*itr).value << ")\n";
        itr++;
    }
}

bool is_greater(item a, item b){
    return a.value > b.value;
}

bool is_smaller(item a, item b){
    return a.value < b.value;
}

int main(){
    vector<item> v = {{5, 1, "five"}, {3, 0, "three"}, {2, 3, "two"}, {7, 5, "seven"}, {8, 6, "eight"}};
    // sort() function of stl is not stable
    // so we can use stable_sort() to preserve the relative order of equivalent elements while sorting
    // sorts v in ascending order
    stable_sort(v.begin(), v.end(), is_smaller);
    show_vector(v);

    cout << "\n";

    // sorts v in descending order due to comparison function
    stable_sort(v.begin(), v.end(), is_greater);
    show_vector(v);
    return 0;
}

/*

*/