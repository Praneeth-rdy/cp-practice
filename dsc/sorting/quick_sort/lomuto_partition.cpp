// Lomuto partition scheme

#include <iostream>

using namespace std;

// lo and hi are indices. hi is not the size of the array
int partition(int arr[], int lo, int hi){
    // assigning the pivot value, selecting the initial position of i
    int pivot = arr[hi], i = lo - 1, temp;

    // for j from lo to hi-1 as hi is the pivot. 
    // Moving all the elements less than or equal to pivot to the beginning of the array from lo to hi-1.
    for(int j = lo; j < hi; j++){
        if (arr[j] <= pivot){
            ++i;
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    // finally moving(swapping) the pivot to the position of array after all the lesser than or equal to values
    temp = arr[i+1];
    arr[i+1] = arr[hi];
    arr[hi] = temp;
    return i+1;
}


// lo and hi are indices. hi is not the size of the array
void quickSort(int arr[], int lo, int hi){
    int pivot;
    if(lo < hi){
        // Dividing the array into two parts with respect to pivot
        // Such that all the elements less than or equal to the pivot will be on left
        // And the remain on the right
        pivot = partition(arr, lo, hi);
        // Recursively sorting the left elements of pivot [lo, pivot)
        quickSort(arr, lo, pivot-1);
        // Recursively sorting the right elements of pivot (pivot, hi]
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