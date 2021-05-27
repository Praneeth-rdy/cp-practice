// Implementation of max-priority queues using linked lists and arrays
#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

struct item {
    int priority;
    int id;
    string name;
};

void show_queue(list<item> mylist){
    list<item>::iterator itr = mylist.begin();

    while(itr != mylist.end()){
        cout << (*itr).id << ": " << (*itr).name << " (priority: " << (*itr).priority << ")\n";
        itr++;
    }
}

bool maxpqueue_compare(item &a, item &b){
    return a.priority > b.priority;
}

void maxpqueue_insert(list<item> &max_pqueue, item queue_item){
    list<item>::iterator itr = max_pqueue.begin();
    while(((*itr).priority > queue_item.priority) && (itr != max_pqueue.end())){
        itr++;
    }
    max_pqueue.insert(itr, queue_item);
}

item pqueue_maximum(list<item> max_pqueue){
    return max_pqueue.front();
}

item pqueue_extract_max(list<item> &max_pqueue){
    item res = max_pqueue.front();
    max_pqueue.pop_front();
    return res;
}

// is_empty works for both max and min priority queues
bool pqueue_is_empty(list<item> max_pqueue){
    return max_pqueue.size();
}

int main(){
    list<item> pqueue = {{2, 2, "Rajesh"}, {3, 1, "Praneeth"}, {1, 3, "Ramesh"}};
    pqueue.sort(maxpqueue_compare);
    // pqueue_extract_max(pqueue);

    maxpqueue_insert(pqueue, {0, 67, "Least prior :("});
    show_queue(pqueue);
    
    return 0;
}