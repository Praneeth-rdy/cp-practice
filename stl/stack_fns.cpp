#include <iostream>
#include <stack>

using namespace std;

// pass by value
void showStack(stack<int> s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n";
}

int main(){
    stack<int> s;

    // pushing an element into stack
    s.push(10);
    s.push(20);
    s.push(30);

    showStack(s);
    // getting the top element from the stack
    cout << "Top: " << s.top() << "\n";

    // popping an element from the stack
    s.pop();
    cout << "Top: " << s.top() << "\n";

    // checking whether a stack is empty
    cout << "is_empty? " << s.empty() << "\n";

    // getting the size of the stack
    cout << "size: " << s.size() << "\n";


    return 0;
}

// Stacks and queues do not have iterators because the concept of stacks and queues is that we can access elements only at the end of the containers
