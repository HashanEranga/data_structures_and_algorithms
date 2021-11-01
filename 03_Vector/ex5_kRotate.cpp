#include<iostream>
#include<vector>
#include<bitset>

using namespace std;

void vectorPrinter(vector<int> arr){
    for(int i=0;i<arr.size();i++)
        cout << arr[i] << endl;
}

void arrPrinter(int arr[], int n){
    for(int i=0;i<n;i++)
        cout << arr[i] << endl;
}

vector<int> kRotate(vector<int> a, int k){
    vector<int> vect1;
    int arr[a.size()];
    for(int i=0;i<a.size();i++){
        int step=i+k;
        if(step>=a.size()){
            step=step % a.size();
        }
        arr[step]=a[i];
    }
    arrPrinter(arr, a.size());
    vect1.assign(arr, arr+a.size());
    vectorPrinter(vect1);
    return vect1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,3,5,7,9};
    int k=2;
    vector<int> vect;
    vect.assign(arr, arr+sizeof(arr)/sizeof(arr[0]));
    vector<int> answer = kRotate(vect, k);
    return 0;
}
