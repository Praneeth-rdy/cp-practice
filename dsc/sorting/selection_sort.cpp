#include <iostream>

using namespace std;

void selectionSort(int arr[], int size){
    int temp, min;
    for(int i = 0; i < size; i++){
        min = i;
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[min])
                min = j;
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

}

int main(){
    int arr[] = {4, 5, 3, 7, 10, 22, 2, 8}, n;
    n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    
    return 0;
}