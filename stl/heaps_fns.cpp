// Implementing min-heap and max-heap as priority queues using stl
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

// comparison function which is passed with the following max heap functions of stl in case of min heap
bool comp_min_heap(int i, int j){
    return (i > j);
}

int main(){
    vector<int> mxheap = {10, 20, 30, 5, 15};
    // make_heap from algorithm header file
    make_heap(mxheap.begin(), mxheap.end());
    show_vector(mxheap);

    // to insert an element into heap
    // first insert it using push_back()
    mxheap.push_back(99);
    // now use push_heap to rearrange the new element to its correct position
    push_heap(mxheap.begin(), mxheap.end());
    show_vector(mxheap);
    // extract_max on max_heap using stl
    // first use pop_heap function of stl.
    // This swaps the max element with the last element and rearranges the heap to preserve max heap property in the remaining array excluding the last element which is max
    pop_heap(mxheap.begin(), mxheap.end());
    // now remove the last element which is the max element using pop_back method
    mxheap.pop_back();
    show_vector(mxheap);
    // to know if the given range of elments is a max heap or not use is_heap() function
    cout << "is heap? " << is_heap(mxheap.begin(), mxheap.end()) << "\n";
    // is_heap_until returns the first element which breaks the property of max_heap
    auto last = is_heap_until(mxheap.begin(), mxheap.end());
    cout << (mxheap.end() == last?("Range is heap\n"):("Heap disqualified at " + to_string(*last) + "\n"));
    return 0;
}


/*
if you want to insert an element then v.push_back() and push_heap(start, end)
if you want to extract max then pop_heap(start, end) and v.pop_back()
is_heap(start, end) to check if the given heap is a max heap or not
is_heap_until(start, end) returns an iterator to the first element in the range [first, last) which is not a valid position of a max heap
*/