#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> subArrSortBruteForce(vector<int> arrUnSort){
    vector<int> arrSort(arrUnSort);
    sort(arrSort.begin(), arrSort.end());

    int i=0; int n=arrUnSort.size();
    int j=n-1;

    while(i<n and arrUnSort[i]==arrSort[i]) i++;
    while(j>=0 and arrUnSort[j]==arrSort[j]) j--;

    if(i==n) return {-1,-1};
    return {i,j};
}

bool outOfOrder(vector<int> arr, int i){
    if(i==0) return arr[i]>arr[1];
    if(i==arr.size()-1) return arr[i]<arr[arr.size()-2];
    
    return arr[i] < arr[i-1] or arr[i] > arr[i+1];
}

vector<int> subArraySort(vector<int> arr){
    int smallest=INT_MAX;
    int largest=INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if(outOfOrder(arr,i)){
            smallest=min(smallest, arr[i]);
            largest=max(largest, arr[i]);
        }
    }

    if(smallest==INT_MAX) return{-1,-1};

    int left=0; int right=arr.size()-1;

    while(smallest>=arr[left]) left++;
    while(largest<=arr[right]) right--;

    return {left, right};
}


int main(int argc, char const *argv[])
{
    vector<int> arr{1,2,3,4,5,8,7,6,9,10,11};
    // vector<int> ans=subArrSortBruteForce(arr);
    vector<int> ans=subArraySort(arr);

    cout << ans[0] << endl;
    cout << ans[1] << endl;
    
    return 0;
}
