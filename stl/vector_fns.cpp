#include <iostream>
#include <vector>

using namespace std;

void showVector(vector<int> myvector){
    vector<int>::iterator itr = myvector.begin();

    while(itr != myvector.end()){
        cout << *itr << " ";
        itr++;
    }
    cout << "\n";
}

int main(){
    vector<int> myvector1 = {1, 2, 3};
    vector<int> myvector2(3, 77);
    vector<int> myvector3(myvector2.begin(), myvector2.end());
    showVector(myvector1);
    showVector(myvector2);
    showVector(myvector3);
    
    return 1;
}

/*
The following operations of iterators also work on vectors:
begin()
end()
advance()
prev()
next()
distance()
*/

/*
The following methods/functions work similar to arrays
at()
[] operator
*/

/*
front()
size()
back()
empty()
insert()
pop_back()
erase()
assign()
push_back()
*/

