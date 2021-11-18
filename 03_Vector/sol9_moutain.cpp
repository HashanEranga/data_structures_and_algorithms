#include <iostream>
#include <vector>
#include <algorithm>
/*
Problem 
Write a function that takes input an array of distinct integers, and returns the length of a highest mauntain

A mountain defined as adjacent integers that are strictly increasing until they reach a peak
at which become strictly decreasing

At least three numbers are required to form a mountain 
*/
using namespace std;

int highestMountain(vector<int> arr){
    int n=arr.size();
    int largest = 0;

    for(int i=1;i<n-1;){
        // check for a peak
        if(arr[i]>arr[i+1] and arr[i]>arr[i-1]){
            int cnt=1;
            int j=i;

            // backpropogation
            while(j>=1 and arr[j]>arr[j-1]){
                cnt++; j--;
            }

            // forwardpropogation
            while(i<n-1 and arr[i]>arr[i+1]){
                i++; cnt++;
            }
            largest=max(cnt, largest);
        }
        else i++;
    }
    
   return largest; 
}

int main()
{
    vector<int> arr{5,6,1,2,3,4,5,6,4,3,2,0,1,2,3,-2,4};
    cout << highestMountain(arr) << endl;
    return 0;
}



