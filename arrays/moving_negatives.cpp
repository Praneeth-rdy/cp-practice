#include <iostream>

using namespace std;

int main()
{
    int arr[] = {-3, 0, 2, -1, 1, -2, 0, 1, 2, 1}, size, start = 0, current = 0, temp;
    size = sizeof(arr) / sizeof(arr[0]);
    while (current <= size - 1)
    {
        if (arr[current] >= 0)
        {
            current++;
        }
        else
        {
            if (current == 0)
            {
                current++;
                start++;
            }
            else
            {
                temp = arr[start];
                arr[start] = arr[current];
                arr[current] = temp;
                start++;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}