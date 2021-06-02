#include <iostream>
#include <queue>

using namespace std;

int main(){
    // declaring max pqueue
    priority_queue<int> maxpq;
    // declaring min pqueue
    // any container which supports the following opreations can be used to implement priority_queue
    // empty(), push_back(), size(), pop_back(), front()
    // replace the container you want in place of vector
    priority_queue<int, vector<int>, greater<int>> minpq;

    // operations on max pq
    // inserting a new element into priority queue
    maxpq.push(10);
    maxpq.push(20);
    maxpq.push(30);
    // getting top element
    cout << "maxpq top element: " << maxpq.top() << "\n";

    // removing top element which is the highest value element
    maxpq.pop();

    // operations on minpq
    minpq.push(30);
    minpq.push(100);
    minpq.push(25);
    minpq.push(40);

    // getting the top element
    cout << "minpq top element: " << minpq.top() << "\n";
    return 0;
}

/*
maxpqueue is a container adaptor
heap property is always maintained
first element is always the greatest element (max maxpqueue)
internally uses functions of heap like make_heap, push_heap and pop_heap to maintain heap structure
*/

/*

*/