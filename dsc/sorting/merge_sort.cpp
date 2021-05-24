#include <iostream>
#include <vector>

using namespace std;


vector<int> merge(vector<int> L, vector<int> R){
    vector<int> result;
    int leftIndex = 0, rightIndex = 0, i = 0;

    // i stores the number of iterations which is equal to number elements in result
    // loop runs until the result vector gets filled with the all the elements of L, R
    while(L.size() + R.size() > i){
        i++;
        // Taking all the possibilities of appending leftIndex element to the result
        if(rightIndex >= R.size() || (leftIndex < L.size() && L[leftIndex] <= R[rightIndex])){
            result.push_back(L[leftIndex]);
            leftIndex++;
        } else{
            result.push_back(R[rightIndex]);
            // Considering the decreased size of R by moving the first index pointer of R towards right
            // As we have added the first element from the list
            rightIndex++;
        }
    }
    return result;

}

vector<int> mergeSort(vector<int> arr){
    vector<int> L, R;
    int size = arr.size();
    if (size <= 1)
        return arr;
    L.assign(arr.begin(), next(arr.begin(), size/2));
    R.assign(next(arr.begin(), size/2), arr.end());
    L = mergeSort(L);
    R = mergeSort(R);
    return merge(L, R);
    
}



int main(){
    vector<int> arr = {4, 5, 3, 7, 10, 22, 2, 8}, sorted_array;
    vector<int>::iterator itr;

    sorted_array = mergeSort(arr);
    for(itr = sorted_array.begin(); itr != sorted_array.end(); itr++)
        cout << *itr << " ";
    cout << "\n";

    return 0;
}

// Average Case TC O(nlogn)
// Best Case TC O(nlogn)
// Worst Case time complexity O(nlogn)
// Auxilliary Space O(n)