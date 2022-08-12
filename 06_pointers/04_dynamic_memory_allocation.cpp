#include <iostream>
using namespace std;

int main(){

    // static memory is allocated by the compiler
    // for that use the stack memory

    // for dynamic memory allocation this will happen on the runtime

    // creating a dynamic mem allocation
    // x will be the variable created on the stack memory by the compiler
    // new int will be the value that created on the heap memory this is created by the programmar and he should free
    // the memory
    int * x = new int;
    
    // dynamic array creation
    int * arrPtr = new int[3];

    int count = 0;
    // adding value to the array method 1
    for(int i=0; i< 3; i++){
        *(arrPtr + i) = count;
        count++;
    }

    // print values in the array
    for(int i=0;i<3;i++){
        cout << *(arrPtr + i) << endl;
    }

    delete x;
    delete []arrPtr;

    cout << *x << endl;
    cout << *arrPtr << endl;

    // avoid memory leaks

    return 0;
}