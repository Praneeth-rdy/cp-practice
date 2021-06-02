#include <iostream>
// header file to use pair
#include <utility>

using namespace std;

int main(){
    pair<string, int> person1("Raj", 25);
    pair<string, int> person2;
    person2 = make_pair("Amit", 24); // assigning

    // comparison
    cout << "Equality: " << (person1 == person2) << "\n";

    // accessing
    cout << "Name: " + person1.first << ", age: " << person1.second << "\n";
    cout << "Name: " + person2.first << ", age: " << person2.second << "\n";

    // swap
    person1.swap(person2);

    cout << "Name: " + person1.first << ", age: " << person1.second << "\n";
    cout << "Name: " + person2.first << ", age: " << person2.second << "\n";

    return 0;
}

/*
pair is a struct template used to store two variables of different datatypes in a single unit
* pair<datatype1, datatype2> varname(value1, value2); // initializing
* keywords first and second are used to access the elements i.e. varname.first and varname.second
* pair can be copied using = operator

pair<datatype1, datatype2> var;
var = make_pair(val1, val2);
* make_pair() can be used to assign values to a pair once after definition
* == operator returns true if both the elements of pair are equal
* >, <, >=, <= compares the first elements in the pair. And only if they are equal, compares the second element
* pair1.swap(pair2) exchanges the contents of pair1 and pair2 as both are pairs of same type
* a pair() is initialized with (0, 0) as its first and second elements
*/