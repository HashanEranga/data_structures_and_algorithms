#include<iostream>
using namespace std;

// time complexity of the functions 
// O(n^3)
void printSbArr(int * arr, int size);
int printLargestSbArrSum(int * arr, int size);

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int sizeofArr = sizeof(arr)/sizeof(arr[0]);

    // finding the sub arrays 
    printSbArr(arr, sizeofArr);

    // finding the largest sum of the subarrays
    cout << "The largest sum of the subarray is :" << printLargestSbArrSum(arr, sizeofArr) << endl;
    return 0;
}

void printSbArr(int * arr, int size){
    // initial subarray 
    for(int i=0;i<size;i++){
        // last subarray 
        for(int j=i;j<size;j++){
            // iterate from the first subarray to the last
            for(int k=i;k<=j;k++){
                cout << arr[k] << ",";
            }
            cout << endl;
        }
    }
}

// bruteforce method for getting the subarray sum
int printLargestSbArrSum(int * arr, int size){
    int max = 0;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum>max)
                max = sum;
        }
    }
    return max;
}