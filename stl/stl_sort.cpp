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
// ** comparison function decides whether the passed "first" argument should be placed before the passed "second" argument or not.
// Comparison function to sort in descending order
// Checks whether b should be placed after a in the array
bool comp(int &a, int &b){
    // implies that b should be placed after a, iff b is less than a
    return a > b;
}

int main(){
    vector<int> myvector = {1, 5, 3, 2, 6, 4};
    sort(myvector.begin(), myvector.end(), comp);
    show_vector(myvector);
    // returns true if the range is sorted in the ascending order
    // You can also pass a similar comp function to is_sorted function
    cout << is_sorted(myvector.begin(), myvector.end()) << "\n";
    return 0;
}

/*
** Sort function is not stable
** Time complexity to sort is O(nlogn)
A set of requirements expected by some of the standard libraries from the user-provided functions is called Compare.
So the function we pass to sort as argument should satisfy the requirements of compare
1) Return type should be convertible to bool
2) for all a, function(a, a) == false
3) if function(a, b) == true, function(b, a) == false
4) if function(a, b) and function(b, c) are true, then function(a, c) == true
*/

// stl list has its own sorting method. We cannot use this sort function in case of lists as they are bidirectional

// * The algorithm used by sort() is Introsort. Introsort is a hybrid algorithm which uses quick sort, heapsort and insertion sort to minimize running time
