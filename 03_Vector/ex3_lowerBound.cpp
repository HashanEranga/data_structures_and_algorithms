#include<iostream>
#include<vector>
#include<bitset>

using namespace std;
// O(n) order solution 
int lowerBoundNthOrderSolution(vector<int> A, int Val){
    int m=-1;
    int i=0;
    while(A[i]<=Val){
        m = max(A[i], m);
        i++;
    }
    return m;
}

// O(logn) order solution using the binary search algorithm
int lowerBoundBinarySearch(vector<int> A, int Val){
    int m,s,e,mid;
    m=-1; s=0; e=A.size()-1;

    while(s<=e){
        mid=(s+e)/2; 
        if(A[mid]>Val)
            e=mid-1;
        else{
            m=A[mid];
            s=mid+1;
        }
    }
    return m;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,4,5};
    vector<int> vect;
    vect.assign(arr, arr+sizeof(arr)/sizeof(arr[0]));
    int number = 3;

    cout << lowerBoundBinarySearch(vect, number);  
    return 0;
}
