#include <iostream>
#include <vector>

using namespace std;

int getMaxPairwiseProduct(vector<int> arr){
    int maxValue = 0;
    for (int i = 0; i < arr.size(); i++)
        for (int j = i+1; j < arr.size(); j++)
            if(arr[i]*arr[j] > maxValue) maxValue = arr[i]*arr[j];
    return maxValue;
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int ans = getMaxPairwiseProduct(arr);
    cout << ans << endl;
    
    return 0;
}