#include <iostream>

using namespace std;

void insertionSort(int arr[], int size){
    int j, key;
    for(int i = 1; i < size; i++){
        key = arr[i];
        j = i - 1;
        while(key < arr[j] && j >= 0){
            // Moving the jth element to j+1th position and making the jth position empty
            // In the first iter, we move i-1th(jth) to ith(j+1th).
            // As we stored the value of key which is at ith position in a variable key,
            // there won't be any problem if we move the i-1th pos to ith
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;

    }
}

int main(){
    int arr[] = {4, 5, 3, 7, 10, 22, 2, 8}, n;
    n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}

// Best case: O(n)
// Worst case: O(n^2)
// Average Case: O(n^2)

// In insertion sort for nearly sorted array where each element is atmost k positions away from its target position,
// time complexity to move each element k positions is O(k) and the array has n elements. So, time complexity becomes O(nk). Fpr small values of constant k, we can take it as O(n)
