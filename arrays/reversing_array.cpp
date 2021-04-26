#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, array_size, temp, i;
    array_size = sizeof(arr) / sizeof(arr[0]);
    for (i = 1; i <= array_size / 2; i++)
    {
        temp = arr[i - 1];
        arr[i - 1] = arr[array_size - i];
        arr[array_size - i] = temp;
    }

    for (i = 0; i < array_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}