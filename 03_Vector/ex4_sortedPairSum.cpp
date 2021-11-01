#include<iostream>
#include<vector>
#include<bitset>

using namespace std;

pair<int,int> closestSumBruteForce(vector<int> arr, int x){
    int s,p,mx;
    mx=0;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
           if(arr[i]+arr[j]<=x & i!=j & arr[i]+arr[j]>mx){
               mx=arr[i]+arr[j];
               s=i;p=j;
           }
        }
    }
    return {arr[s],arr[p]};
}

pair<int,int> closestSumTwopointerApproach(vector<int> arr, int x){
    int res1,res2,s,e,diff;
    s=0;e=arr.size()-1;
    diff = INT_MAX;
    while(s<e){
        if(abs(arr[s]+arr[e]-x)<diff){
            diff=abs(arr[s]+arr[e]-x);
            res1=s;
            res2=e;
        }
        if(arr[s]+arr[e]>x){
            e--;
        }
        else{
            s++;
        }
    }
    return {arr[res1], arr[res2]};
}

int main(int argc, char const *argv[])
{
    int arr[] = {10,22,28,29,30,40};
    int x=54;
    vector<int> vect;
    vect.assign(arr, arr+sizeof(arr)/sizeof(arr[0]));
    pair<int,int> p=closestSumTwopointerApproach(vect,x);
    cout << p.first << endl;
    cout << p.second << endl;
    return 0;
}
