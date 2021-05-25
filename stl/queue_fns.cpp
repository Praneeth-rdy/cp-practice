#include <iostream>
#include <queue>

using namespace std;

void show_queue(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
}

int main(){
    queue<int> q;

    // enqueue an element into queue
    q.push(10);
    q.push(20);
    q.push(30);

    show_queue(q);
    // getting last or the newest element of queue
    cout << q.back() << "\n";

    // getting first or the oldest element of queue
    cout << q.front() << "\n";

    // dequeue an element from the queue
    q.pop();

    show_queue(q);

    // checking if a queue is empty
    cout << "is_empty? " << q.empty() << "\n";

    // getting the size of the queue
    cout << "size: " << q.size() << "\n";

    return 0;
}

// Stacks and queues do not have iterators because the concept of stacks and queues is that we can access elements only at the end of the containers

