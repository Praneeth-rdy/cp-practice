#include <iostream>
// Header file to use list
#include <list>

using namespace std;

void show_list(list<int> mylist){
    list<int>::iterator itr = mylist.begin();

    while(itr != mylist.end()){
        cout << *itr << " ";
        itr++;
    }
    cout << "\n";
}

int main(){
    list<int> mylist1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list<int> mylist2(3, 77); // 3 elements with value 77
    list<int> mylist3(mylist2.begin(), mylist2.end());
    show_list(mylist1);
    show_list(mylist2);
    show_list(mylist3);


    // Inserting element in last position in a list
    mylist2.push_back(78);

    // Returns the last element of the list
    cout << mylist2.back() << "\n";

    // Modifying the last element using back()
    mylist2.back() = 0;
    cout << mylist2.back() << "\n";

    mylist2.pop_back();
    show_list(mylist2);


    // insert() method of lists works similar to that of insert_after() function in the forward lists with few differences
    // 1) This function inserts new elements before the element at the specified position
    // 2) returns an iterator that points to the first of the newly inserted elements
    show_list(mylist3);
    mylist3.insert(mylist3.begin(), 2);
    show_list(mylist3);
    mylist3.insert(mylist3.begin(), 3, 20); // inserts 20, 3 times before the first element
    // mylist3.insert(inserting_pos, ref_list.begin(), ref_list.end())
    show_list(mylist3);
    mylist3.insert(next(mylist3.begin(), 4), {1, 2, 3});
    show_list(mylist3);


    // erasing the elements
    // erase() returns an iterator that points to the next element after the erased elements
    mylist3.erase(mylist3.begin());
    show_list(mylist3);

    // erasing range of elements
    mylist3.erase(mylist3.begin(), next(mylist3.end(), 6));
    show_list(mylist3);

    // number of elements in a list

    cout << "mylist3 size: " << mylist3.size() << "\n";
    return 0;
}

/*
Operations of iterators which also work on lists:
list.begin()
list.end()
advance(itr, n)
auto new_itr = prev(itr, n)
auto new_itr = next(itr, n)
int d = distance(itr1, itr2)
*/

/*
The following functions work similar to forward lists:
push_front()
pop_front()
front()
assign()
remove()
empty()
*/

/*
new methods in lists:
back()
push_back()
pop_back()
size()
insert()
erase()
*/