#include<iostream>
using namespace std;

// method for display array items
void dispArr(int * arr, int size);

// method fot reverse array items
// time complexity O(n)
void reverseArr(int * arr, int size);

int main(int argc, char const *argv[])
{
    // sample array
    int arr[] = {1,2,3,4,5,6,7,8,9};

    // size of array 
    int sizeofArr = sizeof(arr)/sizeof(arr[0]);

    // display array elements
    dispArr(arr, sizeofArr);

    // reverse array elements
    reverseArr(arr, sizeofArr);

    // display array elements
    dispArr(arr, sizeofArr);
    return 0;
}

void dispArr(int * arr, int size){
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
    cout << endl;
}

void reverseArr(int * arr, int size){
    int start, end; 
    start = 0;
    end = size-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start+=1;
        end-=1;
    }

}