#include<iostream>
using namespace std;

int SbArrSum_prefixSum_optimization(int * arr, int size);
void dispArr(int * arr, int size);

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int sizeofArr = sizeof(arr)/sizeof(arr[0]);

    cout << SbArrSum_prefixSum_optimization(arr, sizeofArr) << endl;

    return 0;
}

int SbArrSum_prefixSum_optimization(int * arr, int size){
    // prefix array
    int prefix[100] ={0};
    prefix[0] = arr[0];

    for(int i=1;i<size;i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    // display the prefix array
    dispArr(prefix, size);

    // find the largest sum 
    int largest_sum = 0;

    for(int i=0;i<size;i++){
        for(int j=1;j<size;j++){
            int subArrSum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];
            largest_sum = max(subArrSum, largest_sum);
        }
    }

    return largest_sum;
}

void dispArr(int * arr, int size){
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
    cout << endl;
}