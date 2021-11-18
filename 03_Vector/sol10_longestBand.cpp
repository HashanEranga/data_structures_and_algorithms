#include <iostream>
#include <vector>
#include <unordered_set>

/*
Problem 
Given an array containing N integers, find the length of longest band

A band is defined as a subsequence which can be reordered in such a manner all elements appear consecutive 

A longest band is the band which contains maximum integers. 
*/

using namespace std;

int longestBand(vector<int> arr){
    // size of the array 
    int n=arr.size();

    // create an unordered set 
    unordered_set<int> unSet;

    // assign all values into the unSet
    for(auto element: arr) unSet.insert(element);

    // largest length 
    int largestLength = 1;
    // iterate through the entire arr
    for(auto element : unSet){
        // get the value of the parent element 
        int parent = element -1; 

        // if the parent element is not exist then it is a start node of the band  
        if(unSet.find(parent)==unSet.end()){
            int cnt=1; 
            int next_element = element + 1;

            // goes until there is no sequence element 
            while(unSet.find(next_element)!=unSet.end()){
                next_element++;
                cnt++;
            }

            // compare the previous largest length and the current one and find the largest
            largestLength=max(cnt, largestLength);
        }

    }
    return largestLength;
}

int main(int argc, char const *argv[])
{
    vector<int> array{1,9,3,0,18,5,2,4,10,7,12,6};
    cout << longestBand(array) << endl;
    return 0;
}
