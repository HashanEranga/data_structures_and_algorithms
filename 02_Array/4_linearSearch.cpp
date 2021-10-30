#include<iostream>
using namespace std;

// Linear Search is the brute force method to find any value given in an array
// address of the array, size of the array and the key of the searching is passed to the function 
// Here in the given algorithm we move along all the elements in the algorithm in order to find the key value given in any array
// therefore the time complexity of the algorithm will be O(n)
int linear_search(int * arr, int size, int key);

// method for populate an array 
void fillArr(int * arr, int size);

// method for display array elements
void dispArr(int * arr, int size);

int main(int argc, char const *argv[])
{
    int arr[100] = {0};
    // Asking for the size of the array
    int sizeofArr; 
    cout << "What is the size of the array : "; 
    cin >> sizeofArr;
    cout << endl;

    // Include values to the array 
    fillArr(arr, sizeofArr);

    // display the array input
    dispArr(arr, sizeofArr);

    // get the key searching in the array
    int value;
    cout << "Enter the key value searching in the array : ";
    cin >> value; 
    cout << endl;

    // display wheather the answer is in the array or not
    int ans = linear_search(arr, sizeofArr, value);
    cout << "The index of the key value : " << ans << endl;
    cout << endl;

    return 0;
}

// linear search algorithm implementation 
int linear_search(int * arr, int size, int key){

    // iterate through the array
    for(int i=0;i<size;i++){

        // check weather an particular element is present in the array consider
        if(arr[i] == key)
            // the index of the key asking is passed
            return i;    
    }

    // -1 passed because if the value cannot found what is searching. 
    return -1;
}

// implementation for array fill by elements 
void fillArr(int * arr, int size){
    for(int i=0;i<size;i++){
        cout << "Input the value for the element " << i << " : ";
        cin >> arr[i];
        cout << endl;
    }
}

// implementation for array display values 
void dispArr(int * arr, int size){
    for(int i=0;i<size;i++)
        cout << arr[i] << ", ";
    cout << endl;
}