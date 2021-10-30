#include <iostream>
using namespace std;

// kadan's algorithm for finding maximum sub array sum
// time complexity O(n)
int subSum_kadanAlgo(int *arr, int size);

int main(int argc, char const *argv[])
{
    int arr[] = {1,-2,-3,-4,-5,6,7,8,9};
    int sizeofArr = sizeof(arr)/sizeof(arr[0]);

    cout << subSum_kadanAlgo(arr, sizeofArr) << endl;
    return 0;
}

int subSum_kadanAlgo(int * arr, int size){
    int maxSum = 0;
    int currentSum = 0;
    for(int i=0;i<size;i++){
        currentSum+=arr[i];
        
        if(currentSum < 0)
            currentSum=0;
        
        maxSum = max(maxSum, currentSum);

    }
    return maxSum;
}