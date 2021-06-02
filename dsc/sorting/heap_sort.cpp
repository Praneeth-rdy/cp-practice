#include <iostream>
#include <vector>

using namespace std;

struct item {
    int priority;
    int id;
    string name;
};

void show_vector(vector<item> v){
    vector<item>::iterator itr = v.begin();

    while(itr != v.end()){
        cout << (*itr).id << ": " << (*itr).name << " (priority: " << (*itr).priority << ")\n";
        itr++;
    }
}

void max_heapify(vector<item> &max_heap, int i, int end){
    int left = 2*i, right = 2*i + 1, largest;
    item temp;
    if (left <= end && max_heap[left].priority > max_heap[i].priority)
        largest = left;
    else
        largest = i;
    if (right <= end && max_heap[right].priority > max_heap[largest].priority)
        largest = right;
    if(largest != i){
        temp = max_heap[i];
        max_heap[i] = max_heap[largest];
        max_heap[largest] = temp;
        max_heapify(max_heap, largest, end);
    }
}

void build_max_heap(vector<item> &max_heap){
    for(int i = (max_heap.size()-1)/2; i >= 1; i--){
        max_heapify(max_heap, i, max_heap.size()-1);
    }
}

void heap_sort(vector<item> &arr){
    item temp;
    arr.insert(arr.begin(), {0, 0, "not counted"});
    build_max_heap(arr);
    for(int i = arr.size()-1; i > 1; i--){
        temp = arr[i];
        arr[i] = arr[1];
        arr[1] = temp;
        max_heapify(arr, 1, i-1);
    }
    arr.erase(arr.begin());
}

int main(){
    vector<item> arr = {{5, 1, "five"}, {3, 0, "three"}, {2, 3, "two"}, {7, 5, "seven"}, {8, 6, "eight"}};
    heap_sort(arr);
    show_vector(arr);
    return 0;
}