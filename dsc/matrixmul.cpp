#include <iostream>
#include <vector>

using namespace std;

void print_matrix(vector<vector<float>> matrix)
{
    vector<vector<float>>::iterator itr;
    vector<float>::iterator rowitr;
    for (itr = matrix.begin(); itr != matrix.end(); itr++)
    {
        for (rowitr = (*itr).begin(); rowitr != (*itr).end(); rowitr++)
        {
            cout << *rowitr << " ";
        }
        cout << "\n";
    }
}

vector<vector<float>> multiply_matrix(vector<vector<float>>::iterator Aitr, vector<vector<float>>::iterator Bitr, int n)
{
    vector<vector<float>> C;
    if (n == 1)
    {
        C.push_back({});
        (*(C.begin())).push_back((*Aitr).front() * (*Bitr).front());
    }
    else
    {
        /*C11 = multiply_matrix(A, B);
        C12 = multiply_matrix(A, B);
        C21 = multiply_matrix(A, B);
        C22 = multiply_matrix(A, B);*/
    }
    return C;
}

int main()
{
    //vector<vector<float>> A = {{1, 2}, {3, 4}}, B = {{1, 2}, {3, 4}};
    vector<vector<float>> A = {{1}}, B = {{2}};
    vector<vector<float>> C = multiply_matrix(A.begin(), B.begin(), 1);
    print_matrix(C);
    return 1;
}