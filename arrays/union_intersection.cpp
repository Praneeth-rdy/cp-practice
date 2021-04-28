#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int arr1[] = {1, 3, 4, 5, 7}, arr2[] = {0, 2, 6, 8, 9}, i, n = sizeof(arr1)/sizeof(arr1[0]), un[n], in = {};
    bool exists;
    copy(arr1, arr1+n, un);
    
    
    exists = any_of(begin(arr1), end(arr1), [&](int i) { return i == 4; });
    string a = exists?"True":"False";
    cout << a << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\n";
}