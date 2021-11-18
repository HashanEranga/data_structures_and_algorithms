#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

/* problem 
Given an array containing N integers and an number S denoting a target sum
Find all distinct integers that can add up to form target sum. The numbers in each triplet should be 
ordered in ascending order and triplets should have be ordered too.

return an empty array if no such triple exists

input 
array = [1,2,3,4,5,6,7,8,9,15]
target = 18

output
[[1,2,15],
[3,7,8],
[4,6,8],
[5,6,7]]
*/
using namespace std;

vector<vector<int>> triplets(vector<int> arr, int sum){
    // logic
    
    // size of the arr 
    int n = arr.size();

    // sort the array
    sort(arr.begin(),arr.end());

    // answer
    vector<vector<int>> result;

    // pick all a[i], pair sum for remaining part
    for (int i = 0; i < n-2; i++)
    {
        // two pointer approach
        int j=i+1; int k=n-1;
        while(j<k){
            int currentSum = arr[i];
            currentSum+=arr[j];
            currentSum+=arr[k];

            if(currentSum==sum){
                result.push_back({arr[i],arr[j],arr[k]});
                j++;k--;
            }
            else if(currentSum>sum) k--;
            else j++;
        }
    }
    return result;
}

int main(){
    vector<int> arr{1,2,3,4,5,15,6,7,8,9};
    int sum = 18;
    auto result = triplets(arr, sum);

    for(auto v : result){
        for(auto item : v){
            cout << item << " "; 
        }
        cout << endl; 
    }
    return 0;
}