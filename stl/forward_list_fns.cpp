#include <iostream>
#include <forward_list>

using namespace std;

void showForwardList(forward_list<int> f_list){
    forward_list<int>::iterator itr = f_list.begin();

    // Traversing
    // .end() does not return iterator pointing to the last element in the data structure
    // it returns an iterator pointing one position after the last element.
    while (itr != f_list.end()){
        cout << *itr << " ";
        itr++;
    }
    cout << "\n";
}

int main(){
    forward_list<int> f_list = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    forward_list<int> nf_list = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    forward_list<int>::iterator fitr = f_list.begin();
    
    showForwardList(f_list);

    // advances ierator by three element positions but doesn't return anything
    advance(fitr, 2);

    // returns new ierator with advanced position
    auto new_itr = next(fitr, 1);

    // auto new_itr = prev(itr, 1);
    // This segmentation fault as in forward_list position of iterator cannot be decremented

    cout << "Distance: " << distance(fitr, new_itr) << "\n"; // Calculates the number of elements between the two itrs

    f_list.push_front(0);
    f_list.pop_front();
    cout << f_list.front() << "\n";
    f_list.front() = -1;

    showForwardList(f_list);

    // Assigning contents in a forward_list to another forward list

    // method-1
    f_list.assign(nf_list.begin(), nf_list.end());
    showForwardList(f_list);

    // method-2
    f_list.assign({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    showForwardList(f_list);

    // method-3 same number n times
    f_list.assign(7, 3); // (n, val)
    showForwardList(f_list);

    // inserting new element after a position
    f_list.insert_after(f_list.begin(), 3);
    showForwardList(f_list);

    // Method-1 inserting a range of elements
    f_list.insert_after(f_list.begin(), nf_list.begin(), nf_list.end());
    showForwardList(f_list);

    // Method-2 inserting a range of elements
    f_list.insert_after(f_list.begin(), {30, 40, 50});
    showForwardList(f_list);

    // Method-3 inserting same number n times
    f_list.insert_after(f_list.begin(), 2, 100);
    showForwardList(f_list);

    // Removes the element following the given position and returns the itr of the next following element
    auto next_itr = f_list.erase_after(f_list.begin());
    showForwardList(f_list);
    cout << *next_itr << "\n";

    // Removing range of elements after a particular position, it doesn't remove the last element
    f_list.erase_after(f_list.begin(), next(f_list.begin(), 15));
    showForwardList(f_list);

    // Removes all the elements with the given value
    f_list.remove(3);
    showForwardList(f_list);

    cout << f_list.empty() << "\n";

    f_list.assign({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    showForwardList(f_list);


    return 0;
}

