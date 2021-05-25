#include <iostream>
#include <array>

using namespace std;

void show_array(array<int, 5> myarray){
    array<int, 5>::iterator itr = myarray.begin();

    while(itr != myarray.end()){
        cout << *itr << " ";
        itr++;
    }
    cout << "\n";
}

int main(){
    array<int, 5> myarray = {1, 2, 3, 4, 5};
    show_array(myarray);

    // indexing is allowed in arrays
    cout << myarray[2] << "\n";
    // other way to access the elements
    cout << myarray.at(2) << "\n"; // at function returns the reference to the element at the given position
    // at function throws out_of_range exception when given argument is out of bounds

    // arrays are contiguous and fixed size containers (static)


    return 0;
}

/*
The following operations of iterators also work on arrays:
begin()
end()
advance()
prev()
next()
distance()
*/

/*
The following methods work similar to lists
front()
back()
empty()
size()
*** no pop or pushing items is allowed in arrays of c++
*** Array has fixed predefined size
*/
