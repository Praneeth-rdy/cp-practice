#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size){
    int n = size, temp;
    bool swapped;
    while (n != 0)
    {
        swapped = false;
        for(int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swapped = true;
            }
        }
        n--;
        if(!swapped){
            break;
        }
    }
    
    
}

int main(){
    int arr[] = {4, 5, 3, 7, 10, 22, 2, 8}, n;
    n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    
    return 0;
}

// Best case time complexity O(n)
// Worst case time complexity O(n^2)
// Average Case o(n^2)