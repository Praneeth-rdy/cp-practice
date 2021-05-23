#include <iostream>
#define SEARCH_ITEM 3

using namespace std;

int binarySearch(int arr[], int size, int search_item){
    int start = 0, end = size-1, mid;
    // Checking if the desired element is out of the sorted array
    if(search_item < arr[start] || search_item > arr[end])
        return 0;
    while(start <= end){
        mid = arr[(start+end)/2];
        if(search_item == mid){
            return (start+end)/2;
        } else if(search_item > mid){
            start = mid + 1;
        } else{
            end = mid - 1;
        }
    }

    return 0;
}


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, n, search_item = SEARCH_ITEM, search_index;
    n = sizeof(arr)/sizeof(arr[0]);
    search_index = binarySearch(arr, n, search_item);
    if(search_index){
        cout << arr[search_index] << " found at index " << search_index << "\n";
    } else {
        cout << "Element not found!\n";
    }

    return 0;
}

// time complexity: O(logn)