#include<iostream>
using namespace std;

// in order to do the binary search the array should be sorted first
// also the values should be monotonic either decreasing or increasing 
// summarized algorithm
/*
    s = 0 , e = n-1
    while(s<=e){
        find the mid value
        do comparison at mid
            equal => return the mid point
            > left
            < right
    }
*/
// time cpmplexity of the algorithm 
// O(log n)

// binary search algorithm
int binary_search(int * arr, int size, int key){
    int start, end, mid;
    start = 0;
    end = size-1;
    
    while (start <= end){
        mid = (start+end)/2;

        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            start = mid+1;
        else
            end = mid-1;
    }
    return -1;
}

// enter array value method sign
void inputArr(int * arr, int size);
// display array values method sign
void dispArr(int * arr, int size);

int main(int argc, char const *argv[])
{

    // define variables
    int arr[100] = {0}; 
    int sizeofArr;
    int key;
    int ans;

    // initial message asking the number of elements in the array
    cout << "Enter the size of the array : ";
    cin >> sizeofArr;
    
    // enter array values 
    cout << "Enter array values in lexicographical order" << endl;
    inputArr(arr, sizeofArr);

    // display array values
    dispArr(arr, sizeofArr);

    // getting inputs for the key
    cout << "Enter the key value : ";
    cin >> key;

    // do the binary search 
    ans = binary_search(arr, sizeofArr, key);

    // display the index of the key 
    cout << "The index of the key value " << key << " is : " << ans << endl; 
    return 0;
}

void inputArr(int * arr, int size){
    for(int i=0;i<size;i++){
        cout << "Enter values for the element " << i << " :" << endl;
        cin >> arr[i];
    }
}

void dispArr(int * arr, int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ,";
    }
    cout << endl;
}