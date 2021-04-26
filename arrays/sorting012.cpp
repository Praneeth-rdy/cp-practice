#include <iostream>

using namespace std;

int main()
{
    int arr[] = {0, 2, 1, 0, 1, 2, 1}, size, start = 0, current = 0, end, temp;
    size = sizeof(arr) / sizeof(arr[0]);
    end = size - 1;
    while (current <= end)
    {
        if (arr[current] == 0)
        {
            if (current == 0)
            {
                current++;
                start++;
            }
            else
            {
                arr[current] = arr[start];
                arr[start] = 0;
                start++;
            }
        }
        else if (arr[current] == 2)
        {
            if (current == size - 1)
            {
                current++;
                end--;
            }
            else
            {
                arr[current] = arr[end];
                arr[end] = 2;
                end--;
            }
        }
        else
        {
            current++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}