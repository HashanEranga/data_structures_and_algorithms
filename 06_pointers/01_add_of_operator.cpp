#include <iostream>
using namespace std;

int main(){
    
    // create  a  pointer variable
    int x = 23;
    float y = 5.5;

    // adderess of the pointer variable 
    cout << &x << endl;
    cout << &y << endl;

    // a pointer : the variable that holds the address of another variable
    // define an integer pointer
    int * ptrInt = &x;
    // define a floting point number pointer
    float * ptrFloat = &y; 

    cout << "Pointer of x : " << ptrInt << endl;
    cout << "Pointer of y : " << ptrFloat << endl;

    // a pointer that stores the pointer of another variable
    int **ptrOfIntPtr = &ptrInt;

    cout << "Pointer of x pointer : "<< &ptrInt << endl;
    cout << "Pointer of x pointer : "<< ptrOfIntPtr << endl;

    // dereference operator 
    // pointers can access the value they stored in the address
    cout << "Value of x : " << *ptrInt << endl;
    cout << "Value of x : " << x << endl;

    // cannot dereference an null pointer
    int * ptr = NULL;
    // cout << "Value of a null pointer  : " << *ptr << endl;

    // reference variable
    // pass value by reference
        // using pointer
        // using reference variables
    int value = 10; 
    int &pointer = value;

    pointer++; 
    value++;

    cout << "value of the name value : " << value << endl;
    cout << "value of the name pointer : " << pointer << endl;


    return 0;
}