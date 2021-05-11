#include <iostream>
using namespace std;

void print(int x, int y=10);
void print(int x, int y){
    cout << "x: " << x << " y: " << y << endl;
}

int main()
{
    print(9);

    return 0;
}
