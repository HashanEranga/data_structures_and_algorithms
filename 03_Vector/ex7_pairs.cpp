#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

/*
problem 
Given an array containing N integers, and an number S denoting a target sum. 
Find two distinct integers that can pair up to form target sum. Let us assume there will be only one such pair.

Input 
array = [10,5,2,3,-6,9,11]
S = 4

Output 
[10, -6]
*/

// bruteforce approach 
// O(N^2)
pair<int, int> pairSumBruteforce(vector<int> array, int s);

// by sorting 
// O(N*logN)
pair<int, int> pairSumBySorting(vector<int> array, int s);

// using data structures ==> Hash tables
// O(N)
pair<int, int> pairSumByHashing(vector<int> array, int s);

// other functions require
int binarySearch(vector<int> array, int key);

int main(int argc, char const *argv[])
{
    vector<int> array{10,5,2,3,-6,9,11};
    int s = 4;

    pair<int,  int> ans1 = pairSumBruteforce(array, s);
    pair<int,  int> ans2 = pairSumBySorting(array, s);
    // pair<int,  int> ans3 = pairSumByHashing(array, s);

    cout<<ans1.first<<endl;
    cout<<ans1.second<<endl;

    cout<<ans2.first<<endl;
    cout<<ans2.second<<endl;

    // cout<<ans3.first<<endl;
    // cout<<ans3.second<<endl;

    return 0;
}

// Pairs bruteforce approach 
// O(N^2)
pair<int, int> pairSumBruteforce(vector<int> array,int s){
    for(int i=0;i<array.size();i++){
        for(int j=0;j<array.size();j++){
            if(array[i]+array[j]==s and i!=j){
                return {array[i], array[j]};
            }
        }
    }
    return {INT_MAX,INT_MAX};
}

// using binary search while iterate through the array
// O(NlogN)
pair<int, int> pairSumBySorting(vector<int> array, int s){
    vector<int> subArr;
    for(int i=0;i<array.size();i++){
        int key=s-array[i];
        // cout << "Key = " << key << endl;
        // for(int j=0;j<subArr.size();j++) cout << subArr[j] << " ";
        // cout << endl;
        int pairVal=binarySearch(subArr, key);
        if (pairVal!=INT_MAX) return {array[i], key};
        subArr.push_back(array[i]);
    }
    return {INT_MAX, INT_MAX};
}

// O(logN)
int binarySearch(vector<int> array, int key){
    int s,e,m;
    s=0;e=array.size()-1;
    while(s<=e){
        m=(s+e)/2;
        // cout << "start = " << s << " end = " << e << " mid = " << m << endl; 
        if(array[m]==key) return key;
        else if (array[m]>key) s=m+1;
        else e=m-1;
    }
    cout << endl;
    return INT_MAX;
}