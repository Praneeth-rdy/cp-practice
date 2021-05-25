// Hoare's Classic Partitioning Algorithm

#include <iostream>

using namespace std;

int partition(int arr[], int lo, int hi){
    int pivot, i, j, temp;
    pivot = arr[lo]; // initial pivot (reference of partition) which is the first element
    i = lo -1; // one index starting from left
    j = hi + 1; // the other starts from right
    while(true){
        do{
            j--;
        } while(arr[j]>pivot); // only breaks the loop when it finds arr[j] <= pivot
        do{
            i++;
        } while(arr[i]<pivot);
        if(i < j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        } else{
            return j;
        }
    }
}

// lo and hi are indices. hi is not the size of the array
void quickSort(int arr[], int lo, int hi){
    int pivot;
    if(lo < hi){
        // The pivot considered during the partition is different from the pivot returned by the partition
        // The initial pivot taken is a reference to sort elements into two halfs one with elements greater than or equal to pivot and the other less than or equal
        // Now when the array is partitioned based on this pivot, lo becomes > hi, so hi wll be entered boundary just entered into lower values(than initial pivot) region
        // So now this boundary value hi is considered as the new pivot which partitions the array into two halfs
        pivot = partition(arr, lo, hi);
        quickSort(arr, lo, pivot);
        quickSort(arr, pivot+1, hi);
    }
}

int main(){
    int arr[] = {4, 5, 3, 7, 10, 22, 2, 8}, n;
    n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    
    return 0;
}