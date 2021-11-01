#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int largestElement(vector<int> arr){
    int max = arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}


int main(int argc, char const *argv[])
{
    int testCase1[] = {-3,4,1,2,3};
    int testCase2[] = {-1,-2,-3,-3,8};

    // converts an array into a vector
    vector<int> vect1(testCase1, testCase1 + sizeof(testCase1)/sizeof(testCase1[0]));
    vector<int> vect2(testCase2, testCase2 + sizeof(testCase2)/sizeof(testCase2[0]));

    cout << largestElement(vect1) << endl;
    cout << largestElement(vect2) << endl;

    return 0;
}