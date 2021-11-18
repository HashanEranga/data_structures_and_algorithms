#include <iostream>
#include <vector>
#include <bitset>

/*
Problem 

Given n non negative integers representing an elevation map where the width of each bar is 1, compute how much water it
can trap after raining 

sample input
heights = [0,1,0,2,1,0,1,3,2,1,2,1]

output 
6
 */

using namespace std;
int trappedWater(vector<int> heights){
    // size of array
    int n=heights.size();
    
    // corner case : that if the n=2 means there is no chance for trap water
    if(n<=2) return 0;

    // finding the left most height and right most height array
    vector<int> left(n,0), right(n,0);
    left[0]=heights[0];
    right[n-1]=heights[n-1];

    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i-1],heights[i]);
        right[n-i-1] = max(right[n-i],heights[n-i-1]);
    }

    int trapWater=0;
    for (int i = 0; i < n; i++)
    {
        trapWater+=min(left[i],right[i])-heights[i];
    }
    
    return trapWater;    
}

int main()
{
    vector<int> heights{0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trappedWater(heights);
    
    return 0;
}
