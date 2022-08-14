#include <iostream>
#include <vector>
using namespace std;

int main(){

    // create an vector 
    vector<int> arr = {1,2,3,4,5};
    for(int x : arr){
        cout << x << endl;
    }

    // add an element 
    arr.push_back(12);

    for(int x : arr){
        cout << x << endl;
    }

    // remove the element at back 
    arr.pop_back();
    for(int x : arr){
        cout << x << endl;
    }

    // create an 2d array
    vector<vector<int>> arr2 = {};

    for(int i=0;i<5;i++)
        for(int j=0; j<4;j++)
            arr2[i][j] = 4;

    for(int i=0;i<5;i++)
        for(int x : arr2[i])
            cout << x <<endl;


    return 0;
}