#include<iostream>
using namespace std;

// int arr[] can be replaced with * arr as well the same thing both are the memory location of the first element of the array called arr
void printArray(int * arr){
    // this will shows 8 because the what is passed to this function is an address
    cout << "In Function : " << sizeof(arr) << endl; 

}

void printArray2(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    // creting the array 
    int arr[] = {1,2,3,4,5};

    // size of array
    int n = sizeof(arr)/sizeof(arr[0]);

    // size in main
    cout << "In main : " << sizeof(arr) << endl;

    // call the function 
    printArray(arr);

    // In main : 20
    // In Function : 8

    // for access all the elements in the array need to pass the size as well
    // printArray2 will be the optimal method to pass the value by reference.
    // The same thing can be done easily without creating a function for the implementation. 
    printArray2(arr, n);

    return 0;
}
