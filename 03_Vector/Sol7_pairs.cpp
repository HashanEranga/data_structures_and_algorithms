#include <iostream>
#include <bitset>
#include <vector>
#include <unordered_set>

using namespace std;
vector<int> pairSum(vector<int> arr, int S){
    unordered_set<int> subArr;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int x = S-arr[i];
        if(subArr.find(x)!=subArr.end()){
            ans.push_back(x);
            ans.push_back(arr[i]);
            return ans;
        }
        subArr.insert(arr[i]);
    }

    return {};
    
}
int main(){
    // input scenario
    vector<int> arr{10,5,2,3,-6,9,11};
    int S=4; 

    auto p = pairSum(arr, S);

    if(p.size()==0) cout << "No pairs" << endl;
    else cout << p[0] << " " << p[1] << endl;
    return 0;
}
