#include <iostream>
#define SEARCH_ITEM 3

using namespace std;


int linearSearchForUnsorted(int arr[], int size, int search_item){
    for(int i = 0; i < size; i++){
        if(search_item == arr[i])
            return i;
    }

    return 0;
}

int linearSearchForSorted(int arr[], int size, int search_item){
    for(int i = 0; search_item >= arr[i]; i++){
        if(search_item == arr[i])
            return i;
    }

    return 0;
}


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, n, search_item = SEARCH_ITEM, search_index;
    n = sizeof(arr)/sizeof(arr[0]);
    search_index = linearSearchForSorted(arr, n, search_item);
    if(search_index){
        cout << arr[search_index] << " found\n";
    }

    return 0;
}