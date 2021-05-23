#include <iostream>
#include <array>

using namespace std;

int peak(int arr[], int start, int end){
    int mid = end -(end - start)/2;
    if((arr[mid-1]<arr[mid]) && (arr[mid+1]<arr[mid])){
        return arr[mid];
    } else if (arr[mid]<arr[mid-1]){
        return peak(arr, start, (start+end)/2);
    } else{
        return peak(arr, (start + end)/2, end);
    }
}

int main(){
    int arr[] = {1, 6, 7, 8, 1, 9};
    cout << peak(arr, 0, 6) << endl;
    return 1;
}

// T(n) = T(n/2) + O(1)
// => T(n) = O(logn)