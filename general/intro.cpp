#include <iostream>

// To include <stdio.h> of c
#include <cstdio>

namespace values {
    int a = 10;
}

int a =100;

int main(){
    int a = 1000;
    // These both aren't same
    // endl is used to add new line character and also to flush the buffer maintained by cout
    std::cout << "Hello World\n";
    std::cout << "Hello World" << std::endl;

    std::cout << "namespace values a:" << values::a << ",\n";
    std::cout << "global a:" << ::a << ",\n";
    std::cout << "int main local a:" << a << ",\n";

    // printf/scanf are faster than cout/cin because
    // The iostream functions(cin/cout) maintains synchronization with C I/O functions
    // To turn off the synchronzation
    std::ios::sync_with_stdio(false);
    // When we add the above line we can see that c++ iostream functions run faster.
    // With synchronization turned off, using cin and scanf() together will result in an undefined mess.
    

    return 0;
}