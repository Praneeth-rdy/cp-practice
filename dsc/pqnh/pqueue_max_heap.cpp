#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct item{
    int priority;
    int id;
    string name;
};

bool item_comp(item &a, item &b){
    return a.priority > b.priority;
}

void show_vector(vector<item> myvector){
    vector<item>::iterator itr = myvector.begin();

    while(itr != myvector.end()){
        cout << (*itr).name << " ";
        itr++;
    }
    cout << "\n";
}

void max_heapify(vector<item> &max_heap, int i){
    int left = 2*i, right = 2*i + 1, largest;
    item temp;
    if (left <= max_heap.size()-1 && max_heap[left].priority > max_heap[i].priority)
        largest = left;
    else
        largest = i;
    if (right <= max_heap.size()-1 && max_heap[right].priority > max_heap[largest].priority)
        largest = right;
    if(largest != i){
        temp = max_heap[i];
        max_heap[i] = max_heap[largest];
        max_heap[largest] = temp;
        max_heapify(max_heap, largest);
    }
}

void build_max_heap(vector<item> &max_heap){
    for(int i = (max_heap.size()-1)/2; i >= 1; i--){
        max_heapify(max_heap, i);
    }
}

item extract_max(vector<item> &max_heap){
    item max;
    // Add a condition where heap size < 1 i.e. max_heap.size() < 2 raise an error;
    max = max_heap[1];
    max_heap[1] = max_heap.back();
    max_heap.pop_back();
    // We should always maintain the heap property even when we modify the heap;
    max_heapify(max_heap, 1);
    return max;
}

void bottom_up_heapify(vector<item> &max_heap, int i){
    item temp;
    while(i > 1 && max_heap[i/2].priority < max_heap[i].priority){
        temp = max_heap[i/2];
        max_heap[i/2] = max_heap[i];
        max_heap[i] = temp;
        i = i/2;
    }
}

void insert_max(vector<item> &max_heap, item insert_item){
    max_heap.push_back(insert_item);
    bottom_up_heapify(max_heap, max_heap.size()-1);
}

int main(){
    vector<item> max_heap = {{0, 0, "not counted"}, {5, 1, "five"}, {3, 0, "three"}, {2, 3, "two"}, {7, 5, "seven"}, {8, 6, "eight"}};

    // max_heapify(max_heap, 1);
    sort(next(max_heap.begin(), 1), max_heap.end(), item_comp);
    build_max_heap(max_heap);
    show_vector(max_heap);
    extract_max(max_heap);
    show_vector(max_heap);
    insert_max(max_heap, {8, 6, "eight"});
    show_vector(max_heap);

    return 0;
}

/*
The maximum height of the tree is ceiling(logn) i.e. number of levels in a heap
ceiling(logn) => largest integer less than log(n) + 1;

Insert and extract_max in heaps take O(logn) time complexity
*/