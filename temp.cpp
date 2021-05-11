#include <iostream>
using namespace std;

int isPalindrome(long int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int M, N, R = 0, C = 0;
    cin >> M >> N;
    long int A[M][N];
    long int temp[M];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < M; i++)
    {
        if (isPalindrome(A[i], N))
        {
            R++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            temp[j] = A[j][i];
        }
        if (isPalindrome(temp, M))
        {
            C++;
        }
    }
    cout << R << " " << C << "\n";
}