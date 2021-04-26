#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6}, size, current, temp;
    size = sizeof(arr) / sizeof(arr[0]);

    for (current = size - 1; current >= 1; current--)
    {
        temp = arr[current];
        arr[current] = arr[current - 1];
        arr[current - 1] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}