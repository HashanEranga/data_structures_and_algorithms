#include <iostream>
using namespace std;

int Fibonnacci(int n){
    vector<int> arr;

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < arr.size(); i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    return arr[n-1];
    
}

int main(int argc, char const *argv[])
{
    int n; 
    cin >> n;

    cout << Fibonnacci(n) << endl;

    return 0;
}
