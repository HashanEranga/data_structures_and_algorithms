#include<iostream>
#include<bitset>
#include<vector>

using namespace std;

int maxSumSubarrayBruteForce(vector<int> A) {
    int maximum = A[0];

    for(int i=0;i<A.size();i++){
        for(int j=0;j<A.size();j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum+=A[k];
                maximum = max(sum, maximum);
            }
        }
    }
    return maximum;
}

int maxSumSubarrayPrefixMatrix(vector<int> A){
    int prefix[A.size()]={0};
    prefix[0] = A[0];

    for(int i=1;i<A.size();i++){
        prefix[i] =prefix[i-1] + A[i];
    }

    int maximum = A[0];
    for(int i=0;i<A.size();i++){
        for(int j=i;j<A.size();j++){
            int subArrSum = (i>0) ? prefix[j]-prefix[i-1]:prefix[j];
            maximum = max(subArrSum, maximum);
        }
    }
    return maximum;
}

int maxSumSubarrayKadansExtendedAlgorithm(vector<int> A){
   int m = A[0];
   int cs=0;
   int maxelem = INT_MIN;

   for(int i=0;i<A.size();i++){
       cs+=A[i];
       if(A[i]<0){
           cs=0;
       }
       if(maxelem<A[i]){
           maxelem = A[i];
       }
   } 
   return (maxelem < 0) ? maxelem : m;
}

int main(int argc, char const *argv[])
{
    int arr[] = {-5,-4,-3,-2};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> array;
    array.assign(arr, arr+n);

    cout << maxSumSubarrayKadansExtendedAlgorithm(array);
    return 0;

}
