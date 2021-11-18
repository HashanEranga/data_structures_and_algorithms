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

vector<int> subArraySort

int main(int argc, char const *argv[])
{
    vector<int> arr{1,2,3,4,5,8,7,6,9,10,11};
    vector<int> ans=subArrSortBruteForce(arr);

    cout << ans[0] << endl;
    cout << ans[1] << endl;
    
    return 0;
}
