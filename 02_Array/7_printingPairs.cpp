#include<iostream>
using namespace std;

// without duplicates all the pairs
void printingPairs(int * arr, int size);

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int sizeofArr = sizeof(arr)/sizeof(arr[0]);

    printingPairs(arr, sizeofArr);
    return 0;
}

void printingPairs(int * arr, int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            cout << "(" << arr[i] << ", " << arr[j] << ") "; 
        }
        cout << endl;
    }
}